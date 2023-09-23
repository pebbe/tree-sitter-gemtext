module.exports = grammar({
  name: 'gemtext',

  rules: {
    source_file: $ => repeat($._part),

    _part: $ => choice(
      $.head_1,
      $.head_2,
      $.head_3,
      $.pre,
      $.item,
      $.quote,
      $.link,
      $.text,
      /[ \t\r]*\n/ 
    ),

    head_1: $ => seq(
      $.head_1_mark,
      $.head_1_text
    ),
    head_1_mark: $ => /#[ \t]+/,
    head_1_text: $ => $._text,

    head_2: $ => seq(
      $.head_2_mark,
      $.head_2_text
    ),
    head_2_mark: $ => /##[ \t]+/,
    head_2_text: $ => $._text,

    head_3: $ => seq(
      $.head_3_mark,
      $.head_3_text
    ),
    head_3_mark: $ => /###[ \t]+/,
    head_3_text: $ => $._text,

    pre: $ => seq(
      $.pre_start,
      optional($.pre_body),
      $.pre_end
    ),

    pre_body: $ => repeat1($._pre_line),

    pre_start: $ => /```.*/,

    pre_end: $ => /```.*/,

    _pre_line: $ => choice(
      /[^`\n].*\n/,
      /`[^`\n].*\n/,
      /``[^`\n]*\n/
    ),

    item: $ => seq(
      '* ',
      /.*/
    ),

    quote: $ => seq(
      '> ',
      /.*/
    ),

    link: $ => seq(
      /=>[ \t]+/,
      $._url,
      optional($._date),
      optional($._description),
    ),

    _url: $ => choice(
      $.url_intern,
      $.url_extern,
      $.url_foreign
    ),

    url_intern: $ => seq(
      /[^ \t\r\n]/,
      /[^ \t\r\n]*/
    ),

    url_extern: $ => /gemini:\/\/[^ \t\r\n]*/,

    url_foreign: $ => seq(
      choice(
        "mailto:",
        /[a-z]+:\/\//
      ),
      /[^ \t\r\n]*/
    ),

    _date: $ => seq(
      /[ \t]+/,
      $.date
    ),

    date: $ => /\d{4}-\d\d-\d\d/,

    _description: $ => seq(
      /[ \t]+/,
      $.description
    ),

    description: $ => seq(
      /./,
      /.*/
    ),

    text: $ => seq(
      /./,
      /.*/
    ),

    _text: $ => /[^ \t\r\n](.*[^ \t\r\n])?/

  }
});
