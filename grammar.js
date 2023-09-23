module.exports = grammar({
  name: 'gemtext',
  extras: $ => [],
  rules: {

    source_file: $ => seq(
      optional($._blank),
      $._part,
      repeat(
        seq(
          $._blank,
          $._part
        )
      ),
      optional($._blank)
    ),

    _part: $ => choice(
      $.head_1,
      $.head_2,
      $.head_3,
      $.pre,
      $.item,
      $.quote,
      $.link,
      $.text,
    ),

    head_1: $ => seq(
      $.head_1_mark,
      $.head_1_text
    ),
    head_1_mark: $ => /#[ \t]+/,
    head_1_text: $ => /.*/,

    head_2: $ => seq(
      $.head_2_mark,
      $.head_2_text
    ),
    head_2_mark: $ => /##[ \t]+/,
    head_2_text: $ => /.*/,

    head_3: $ => seq(
      $.head_3_mark,
      $.head_3_text
    ),
    head_3_mark: $ => /###[ \t]+/,
    head_3_text: $ => /.*/,

    pre: $ => seq(
      $.pre_start,
      $._blank,
      optional($.pre_body),
      $.pre_end
    ),
    pre_start: $ => /```.*/,
    pre_end: $ => /```.*/,
    pre_body: $ => repeat1(
      choice(
        /[^`\n].*\n/,
        /`[^`\n].*\n/,
        /``[^`\n]*\n/,
        /\n/
      )
    ),

    item: $ => seq(
      $.item_mark,
      $.item_text
    ),
    item_mark: $ => /\*[ \t]*/,
    item_text: $ => /.*/,

    quote: $ => seq(
      $.quote_mark,
      $.quote_text
    ),
    quote_mark: $ => />[ \t]*/,
    quote_text: $ => /.*/,

    link: $ => seq(
      /=>[ \t\r]*/,
      $.url,
      optional(seq($._space, $.link_date)),
      optional(seq($._space, $.link_text)),
    ),

    url: $ => choice(
      $.url_intern,
      $.url_extern,
      $.url_foreign
    ),
    url_intern: $ => seq(
      /[^ \t\r\n]/,
      /[^ \t\r\n]*/
    ),
    url_extern: $ => /gemini:\/\/[^ \t\r\n]+/,
    url_foreign: $ => seq(
      choice(
        /mailto:/,
        /[a-z]+:\/\//
      ),
      /[^ \t\r\n]+/
    ),

    link_date: $ => /\d{4}-\d\d-\d\d/,

    link_text: $ => seq(
      /./,
      /.*/
    ),

    text: $ => seq(
      /./,
      /.*/
    ),

    _space: $ => /[ \t\r]+/,
    _blank: $ => repeat1(/[ \t\r]*\n/)

  }
});
