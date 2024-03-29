/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * This file is part of Scriptonite.                               *
 * See the file "Scriptonite-LICENSE" for Copyright information    *
 * and the terms and conditions for copying, distribution and      *
 * modification of Scriptonite.                                    *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/**
 * Throughout this file reference is made to [ECMA-262]. This is the Standard
 * ECMA-262, ECMAScript Language Specification, 3rd Edition dated December 99.
 * A Portable Document Format (PDF) version is included in the Scriptonite
 * distribution (in scriptonite/docs/).
 *
 * [ECMA-262] refers to the UNICODE character chart. This implementation uses
 * the UNICODE 3.0 Character Chart, available from www.unicode.org at
 * <ftp://ftp.unicode.org/Public/UNIDATA/UnicodeData-Latest.txt>.
 */
Package org.scriptonite;

Helpers
   /**
    * 6. Source Text. [ECMA-262] p. 10.
    */
   source_character = [0x0000..0xFFFF];

   /**
    * 7.2. White Space. [ECMA-262] pp. 11-12.
    */
   tab =  0x0009;
   vt =   0x000B;
   ff =   0x000C;
   sp =   0x0020;
   nbsp = 0x00A0;
   usp =  0x1680  // OGHAM SPACE MARK
      |   0x2000  // EN QUAD
      |   0x2001  // EM QUAD
      |   0x2002  // EN SPACE
      |   0x2003  // EM SPACE
      |   0x2004  // THREE-PER-EM SPACE
      |   0x2005  // FOUR-PER-EM SPACE
      |   0x2006  // SIX-PER-EM SPACE
      |   0x2007  // FIGURE SPACE
      |   0x2008  // PUNCTUATION SPACE
      |   0x2009  // THIN SPACE
      |   0x200A  // HAIR SPACE
      |   0x200B  // ZERO WIDTH SPACE
      |   0x202F  // NARROW NO-BREAK SPACE
      |   0x3000  // IDEOGRAPHIC SPACE
      ;

   simple_white_space = tab | vt | ff | sp | nbsp | usp;

   /**
    *  7.3. Line Terminators. [ECMA-262] p. 12.
    */
   lf = 0x000A; // Line Feed
   cr = 0x000D; // Carriage Return
   ls = 0x2028; // Line separator
   ps = 0x2029; // Paragraph separator
   
   line_terminator = [lf + [cr + [ls + ps]]];

   non_terminator = [source_character - line_terminator];

   /**
    * 7.2. Comments. [ECMA-262] pp. 12-13.
    */
   multi_line_comment =
        '/*' '*'* ([source_character - ['/' + '*']] [source_character - '*']* '*'*)* '*/';

   multi_line_comment_no_lt =
        '/*' '*'* ([non_terminator - ['/' + '*']] [non_terminator - '*']* '*'*)* '*/';

   single_line_comment = '//' non_terminator*;

   comment =
        multi_line_comment_no_lt
      | multi_line_comment
      | single_line_comment
      ;

   /**
    * UnicodeLetter. [ECMA-262] p. 15.
    * any character in the Unicode categories "Uppercase letter (Lu)",
    * "Lowercase letter (Ll)", "Titlecase letter (Lt)", "Modifier letter
    * (Lm)", "Other letter (Lo)", or "Letter number (Nl)".
    */
   unicode_letter =
        [0x0041..0x005A] | [0x0061..0x007A] |  0x00AA          |  0x00B5
      |  0x00BA          | [0x00C0..0x00D6] | [0x00D8..0x00F6] | [0x00F8..0x021F]
      | [0x0222..0x0233] | [0x0250..0x02AD] | [0x02B0..0x02B8] | [0x02BB..0x02C1]
      | [0x02D0..0x02D1] | [0x02E0..0x02E4] |  0x02EE          |  0x037A
      |  0x0386          | [0x0388..0x038A] |  0x038C          | [0x038E..0x03A1]
      | [0x03A3..0x03CE] | [0x03D0..0x03D7] | [0x03DA..0x03F3] | [0x0400..0x0481]
      | [0x048C..0x04C4] | [0x04C7..0x04C8] | [0x04CB..0x04CC] | [0x04D0..0x04F5]
      | [0x04F8..0x04F9] | [0x0531..0x0556] |  0x0559          | [0x0561..0x0587]
      | [0x05D0..0x05EA] | [0x05F0..0x05F2] | [0x0621..0x063A] | [0x0640..0x064A]
      | [0x0671..0x06D3] |  0x06D5          | [0x06E5..0x06E6] | [0x06FA..0x06FC]
      |  0x0710          | [0x0712..0x072C] | [0x0780..0x07A5] | [0x0905..0x0939]
      |  0x093D          |  0x0950          | [0x0958..0x0961] | [0x0985..0x098C]
      | [0x098F..0x0990] | [0x0993..0x09A8] | [0x09AA..0x09B0] |  0x09B2
      | [0x09B6..0x09B9] | [0x09DC..0x09DD] | [0x09DF..0x09E1] | [0x09F0..0x09F1]
      | [0x0A05..0x0A0A] | [0x0A0F..0x0A10] | [0x0A13..0x0A28] | [0x0A2A..0x0A30]
      | [0x0A32..0x0A33] | [0x0A35..0x0A36] | [0x0A38..0x0A39] | [0x0A59..0x0A5C]
      |  0x0A5E          | [0x0A72..0x0A74] | [0x0A85..0x0A8B] |  0x0A8D
      | [0x0A8F..0x0A91] | [0x0A93..0x0AA8] | [0x0AAA..0x0AB0] | [0x0AB2..0x0AB3]
      | [0x0AB5..0x0AB9] |  0x0ABD          |  0x0AD0          |  0x0AE0
      | [0x0B05..0x0B0C] | [0x0B0F..0x0B10] | [0x0B13..0x0B28] | [0x0B2A..0x0B30]
      | [0x0B32..0x0B33] | [0x0B36..0x0B39] |  0x0B3D          | [0x0B5C..0x0B5D]
      | [0x0B5F..0x0B61] | [0x0B85..0x0B8A] | [0x0B8E..0x0B90] | [0x0B92..0x0B95]
      | [0x0B99..0x0B9A] |  0x0B9C          | [0x0B9E..0x0B9F] | [0x0BA3..0x0BA4]
      | [0x0BA8..0x0BAA] | [0x0BAE..0x0BB5] | [0x0BB7..0x0BB9] | [0x0C05..0x0C0C]
      | [0x0C0E..0x0C10] | [0x0C12..0x0C28] | [0x0C2A..0x0C33] | [0x0C35..0x0C39]
      | [0x0C60..0x0C61] | [0x0C85..0x0C8C] | [0x0C8E..0x0C90] | [0x0C92..0x0CA8]
      | [0x0CAA..0x0CB3] | [0x0CB5..0x0CB9] |  0x0CDE          | [0x0CE0..0x0CE1]
      | [0x0D05..0x0D0C] | [0x0D0E..0x0D10] | [0x0D12..0x0D28] | [0x0D2A..0x0D39]
      | [0x0D60..0x0D61] | [0x0D85..0x0D96] | [0x0D9A..0x0DB1] | [0x0DB3..0x0DBB]
      |  0x0DBD          | [0x0DC0..0x0DC6] | [0x0E01..0x0E30] | [0x0E32..0x0E33]
      | [0x0E40..0x0E46] | [0x0E81..0x0E82] |  0x0E84          | [0x0E87..0x0E88]
      |  0x0E8A          |  0x0E8D          | [0x0E94..0x0E97] | [0x0E99..0x0E9F]
      | [0x0EA1..0x0EA3] |  0x0EA5          |  0x0EA7          | [0x0EAA..0x0EAB]
      | [0x0EAD..0x0EB0] | [0x0EB2..0x0EB3] | [0x0EBD..0x0EC4] |  0x0EC6
      | [0x0EDC..0x0EDD] |  0x0F00          | [0x0F40..0x0F6A] | [0x0F88..0x0F8B]
      | [0x1000..0x1021] | [0x1023..0x1027] | [0x1029..0x102A] | [0x1050..0x1055]
      | [0x10A0..0x10C5] | [0x10D0..0x10F6] | [0x1100..0x1159] | [0x115F..0x11A2]
      | [0x11A8..0x11F9] | [0x1200..0x1206] | [0x1208..0x1246] |  0x1248
      | [0x124A..0x124D] | [0x1250..0x1256] |  0x1258          | [0x125A..0x125D]
      | [0x1260..0x1286] |  0x1288          | [0x128A..0x128D] | [0x1290..0x12AE]
      |  0x12B0          | [0x12B2..0x12B5] | [0x12B8..0x12BE] |  0x12C0
      | [0x12C2..0x12C5] | [0x12C8..0x12CE] | [0x12D0..0x12D6] | [0x12D8..0x12EE]
      | [0x12F0..0x130E] |  0x1310          | [0x1312..0x1315] | [0x1318..0x131E]
      | [0x1320..0x1346] | [0x1348..0x135A] | [0x13A0..0x13B0] | [0x13B1..0x13F4]
      | [0x1401..0x1676] | [0x1681..0x169A] | [0x16A0..0x16EA] | [0x1780..0x17B3]
      | [0x1820..0x1877] | [0x1880..0x18A8] | [0x1E00..0x1E9B] | [0x1EA0..0x1EE0]
      | [0x1EE1..0x1EF9] | [0x1F00..0x1F15] | [0x1F18..0x1F1D] | [0x1F20..0x1F39]
      | [0x1F3A..0x1F45] | [0x1F48..0x1F4D] | [0x1F50..0x1F57] |  0x1F59
      |  0x1F5B          |  0x1F5D          | [0x1F5F..0x1F7D] | [0x1F80..0x1FB4]
      | [0x1FB6..0x1FBC] |  0x1FBE          | [0x1FC2..0x1FC4] | [0x1FC6..0x1FCC]
      | [0x1FD0..0x1FD3] | [0x1FD6..0x1FDB] | [0x1FE0..0x1FEC] | [0x1FF2..0x1FF4]
      | [0x1FF6..0x1FFC] |  0x207F          |  0x2102          |  0x2107
      | [0x210A..0x2113] |  0x2115          | [0x2119..0x211D] |  0x2124
      |  0x2126          |  0x2128          | [0x212A..0x212D] | [0x212F..0x2131]
      | [0x2133..0x2139] | [0x2160..0x2183] | [0x3005..0x3007] | [0x3021..0x3029]
      | [0x3031..0x3035] | [0x3038..0x303A] | [0x3041..0x3094] | [0x309D..0x309E]
      | [0x30A1..0x30FA] | [0x30FC..0x30FE] | [0x3105..0x312C] | [0x3131..0x318E]
      | [0x31A0..0x31B7] |  0x3400          |  0x4DB5          |  0x4E00
      |  0x9FA5          | [0xA000..0xA48C] |  0xAC00          |  0xD7A3
      | [0xF900..0xFA2D] | [0xFB00..0xFB06] | [0xFB13..0xFB17] |  0xFB1D
      | [0xFB1F..0xFB28] | [0xFB2A..0xFB36] | [0xFB38..0xFB3C] |  0xFB3E
      | [0xFB40..0xFB41] | [0xFB43..0xFB44] | [0xFB46..0xFBB1] | [0xFBD3..0xFD3D]
      | [0xFD50..0xFD8F] | [0xFD92..0xFDC7] | [0xFDF0..0xFDFB] | [0xFE70..0xFE72]
      |  0xFE74          | [0xFE76..0xFEFC] | [0xFF21..0xFF3A] | [0xFF41..0xFF5A]
      | [0xFF66..0xFFBE] | [0xFFC2..0xFFC7] | [0xFFCA..0xFFCF] | [0xFFD2..0xFFD7]
      | [0xFFDA..0xFFDC]
      ;

   /**
    * UnicodeCombiningMark. [ECMA-262] p. 15.
    * any character in the Unicode categories "Non-spacing mark (Mn)" or
    * "Combining spacing mark (Mc)".
    */
   unicode_combining_mark =
        [0x0300..0x034E] | [0x0360..0x0362] | [0x0483..0x0486] | [0x0591..0x05A1]
      | [0x05A3..0x05B9] | [0x05BB..0x05BD] |  0x05BF          | [0x05C1..0x05C2]
      |  0x05C4          | [0x064B..0x0655] |  0x0670          | [0x06D6..0x06DC]
      | [0x06DF..0x06E4] | [0x06E7..0x06E8] | [0x06EA..0x06ED] |  0x0711
      | [0x0730..0x074A] | [0x07A6..0x07B0] | [0x0901..0x0903] |  0x093C
      | [0x093E..0x094D] | [0x0951..0x0954] | [0x0962..0x0963] | [0x0981..0x0983]
      | [0x09BC..0x09C4] | [0x09C7..0x09C8] | [0x09CB..0x09CD] |  0x09D7
      | [0x09E2..0x09E3] |  0x0A02          |  0x0A3C          | [0x0A3E..0x0A42]
      | [0x0A47..0x0A48] | [0x0A4B..0x0A4D] | [0x0A70..0x0A71] | [0x0A81..0x0A83]
      |  0x0ABC          | [0x0ABE..0x0AC5] | [0x0AC7..0x0AC9] | [0x0ACB..0x0ACD]
      | [0x0B01..0x0B03] |  0x0B3C          | [0x0B3E..0x0B43] | [0x0B47..0x0B48]
      | [0x0B4B..0x0B4D] | [0x0B56..0x0B57] | [0x0B82..0x0B83] | [0x0BBE..0x0BC2]
      | [0x0BC6..0x0BC8] | [0x0BCA..0x0BCD] |  0x0BD7          | [0x0C01..0x0C03]
      | [0x0C3E..0x0C44] | [0x0C46..0x0C48] | [0x0C4A..0x0C4D] | [0x0C55..0x0C56]
      | [0x0C82..0x0C83] | [0x0CBE..0x0CC4] | [0x0CC6..0x0CC8] | [0x0CCA..0x0CCD]
      | [0x0CD5..0x0CD6] | [0x0D02..0x0D03] | [0x0D3E..0x0D43] | [0x0D46..0x0D48]
      | [0x0D4A..0x0D4D] |  0x0D57          | [0x0D82..0x0D83] |  0x0DCA
      | [0x0DCF..0x0DD4] |  0x0DD6          | [0x0DD8..0x0DDF] | [0x0DF2..0x0DF3]
      |  0x0E31          | [0x0E34..0x0E3A] | [0x0E47..0x0E4E] |  0x0EB1
      | [0x0EB4..0x0EB9] | [0x0EBB..0x0EBC] | [0x0EC8..0x0ECD] | [0x0F18..0x0F19]
      |  0x0F35          |  0x0F37          |  0x0F39          | [0x0F3E..0x0F3F]
      | [0x0F71..0x0F84] | [0x0F86..0x0F87] | [0x0F90..0x0F97] | [0x0F99..0x0FBC]
      |  0x0FC6          | [0x102C..0x1032] | [0x1036..0x1039] | [0x1056..0x1059]
      | [0x17B4..0x17D3] |  0x18A9          | [0x20D0..0x20DC] |  0x20E1
      | [0x302A..0x302F] | [0x3099..0x309A] |  0xFB1E          | [0xFE20..0xFE23]
      ;

   /**
    * UnicodeDigit. [ECMA-262] p. 15.
    * any character in the Unicode category "Decimal number (Nd)".
    */
   unicode_digit =
        [0x0030..0x0039] | [0x0660..0x0669] | [0x06F0..0x06F9] | [0x0966..0x096F]
      | [0x09E6..0x09EF] | [0x0A66..0x0A6F] | [0x0AE6..0x0AEF] | [0x0B66..0x0B6F]
      | [0x0BE7..0x0BEF] | [0x0C66..0x0C6F] | [0x0CE6..0x0CEF] | [0x0D66..0x0D6F]
      | [0x0E50..0x0E59] | [0x0ED0..0x0ED9] | [0x0F20..0x0F29] | [0x1040..0x1049]
      | [0x1369..0x1371] | [0x17E0..0x17E9] | [0x1810..0x1819] | [0xFF10..0xFF19]
      ;

   /**
    * UnicodeConnectorPunctuation. [ECMA-262] p. 15.
    * any character in the Unicode category "Connector punctuation (Pc)"
    */
   unicode_connector_punctuation =
         0x005F          | [0x203F..0x2040] |  0x30FB          | [0xFE33..0xFE34]
      | [0xFE4D..0xFE4F] |  0xFF3F          |  0xFF65
      ;

   /**
    * UnicodeEscapeSequence. [ECMA-262] p. 19.
    */
   hex_digit = [['0'..'9'] + [['a'..'f'] + ['A'..'F']]];

   unicode_escape_sequence = 'u' hex_digit hex_digit hex_digit hex_digit;

   /**
    * 7.6. Identifier. [ECMA-262] pp. 14-15.
    */
   identifier_start =
        unicode_letter
      | '$'
      | '_'
      | '\' unicode_escape_sequence
      ;

   identifier_part =
        identifier_start
      | unicode_combining_mark
      | unicode_digit
      | unicode_connector_punctuation
      | '\' unicode_escape_sequence
      ;

   /**
    * 7.8.3. Numeric Literals. [ECMA-262] pp. 16-17.
    */
   decimal_digit = ['0'..'9'];

   non_zero_digit = ['1'..'9'];

   exponent_part = ('e' | 'E') ('+' | '-')? ['0'..'9']+;

   decimal_integer_literal = '0' | ['1'..'9'] ['0'..'9']*;
    
   /**
    * String Literals. [ECMA-262] pp. 18-19.
    */
   single_escape_character =
        [''' + ['"' + ['\' + ['b' + ['f' + ['n' + ['r' + ['t' + 'v']]]]]]]];

   escape_character =
        [single_escape_character + [decimal_digit + ['x' + 'u']]];

   non_escape_character =
        [source_character - [escape_character + line_terminator]];

   character_escape_sequence =
        single_escape_character
      | non_escape_character
      ;

   escape_sequence =
        character_escape_sequence
      | '0' // TODO: [lookahead not a DecimalDigit]
      | 'x' hex_digit hex_digit
      | unicode_escape_sequence
      ;

   double_string_character =
        [source_character - ['"' + ['\' + line_terminator]]]
      | '\' escape_sequence
      ;

   single_string_character =
        [source_character - [''' + ['\' + line_terminator]]]
      | '\' escape_sequence
      ;

   /**
    * 7.8.5. Regular Expression Literals. [ECMA-262] pp. 20-21.
    */
   regular_expression_char =
        [non_terminator - ['\' + '/']]
      | '\' non_terminator
      ;

   regular_expression_first_char =
        [non_terminator - ['*' + ['\' + '/']]]
      | '\' non_terminator
      ;

   regular_expression_body =
        regular_expression_first_char regular_expression_char*;

   white_space_no_lt = (simple_white_space | single_line_comment | multi_line_comment_no_lt)+;
   white_space =       (simple_white_space | comment | line_terminator)+;


States
   normal,
   nolt;


Tokens
          blank_no_lt = (simple_white_space | single_line_comment | multi_line_comment_no_lt)+;
{normal}  blank =       (simple_white_space | comment | line_terminator)+;

   /**
    * 7.5.2. Keywords. [ECMA-262] p.12-13.
    *
    * The tokens "continue", "break", "return" and "throw" should trigger
    * a state change. In this new state, a line terminator shouldn't be
    * considered a white space. All other tokens are parsed as usual.
    *
    * A custom lexer should change the state back to normal as soon as a
    * non white space token is matched.
    */
{normal->nolt}  continue = 'continue';
{normal->nolt}  return =   'return';
{normal->nolt}  break =    'break';
{normal->nolt}  throw =    'throw';
/*
   continue = 'continue' white_space_no_lt;
   return =   'return' white_space_no_lt;
   break =    'break' white_space_no_lt;
   throw =    'throw' white_space_no_lt;
*/
   else =       'else';
   new =        'new';
   var =        'var';
   case =       'case';
   finally =    'finally';
   void =       'void';
   catch =      'catch';
   for =        'for';
   switch =     'switch';
   while =      'while';
   function =   'function';
   this =       'this';
   with =       'with';
   default =    'default';
   if =         'if';
   delete =     'delete';
   in =         'in';
   try =        'try';
   do =         'do';
   instanceof = 'instanceof';
   typeof =     'typeof';

   /**
    * 7.5.3. Future Reserved Words. [ECMA-262] p. 14.
    */
   abstract =     'abstract';
   enum =         'enum';
   int =          'int';
   short =        'short';
   boolean =      'boolean';
   export =       'export';
   interface =    'interface';
   static =       'static';
   byte =         'byte';
   extends =      'extends';
   long =         'long';
   super =        'super';
   char =         'char';
   final =        'final';
   native =       'native';
   synchronized = 'synchronized';
   clazz =        'class';
   float =        'float';
   package =      'package';
   throws =       'throws';
   const =        'const';
   goto =         'goto';
   private =      'private';
   transient =    'transient';
   debugger =     'debugger';
   implements =   'implements';
   protected =    'protected';
   volatile =     'volatile';
   double =       'double';
   import =       'import';
   public =       'public';

   /**
    * 7.8.1. Null Literals. [ECMA-262] p. 16.
    */
   null = 'null';

   /**
    * 7.8.2. Boolean Literals. [ECMA-262] p. 16.
    */
   true =  'true';
   false = 'false';

   /**
    * 7.8.3. Numeric Literals. [ECMA-262] pp. 16-17.
    */
   decimal_literal =
        ('0' | ['1'..'9'] ['0'..'9']*) '.' ['0'..'9']* exponent_part?
      | '.' ['0'..'9']+ exponent_part?
      | ('0' | ['1'..'9'] ['0'..'9']*) exponent_part?
      ;

   hex_integer_literal = ('0x' | '0X') hex_digit+;

   /**
    * 7.7. Punctuators. [ECMA-262] p. 15.
    *
    * Punctuator.
    */
   lbrace =    '{';
   rbrace =    '}';
   lparen =    '(';
   rparen =    ')';
   lbracket =  '[';
   rbracket =  ']';
   dot =       '.';
   semicolon = ';';
   comma =     ',';
   lt =        '<';
   gt =        '>';
   le =        '<=';
   ge =        '>=';
   eq =        '==';
   ne =        '!=';
   eqq =       '===';
   neq =       '!==';
   plus =      '+';
   minus =     '-';
   star =      '*';
   rem =       '%';

/* Trick to handle the special grammar case where incr and decr shouldn't
be preceeded by a line terminator.  

As blanks are normally ignored, we write a regular expression that will 
contain the preceeding blanks as part of the token.  Remember that 
the lexer returns the longest match; a blank followed by ++ or -- is 
longer than a strait blank.

incr_no_lt is listed first so that it gets precedence over incr, when the
preceeding whitespace does not contain a line terminator.

a custom lexer will break these tokens in two: 
blank and [incr/decr][/_no_lt]

*/
   incr_no_lt = white_space_no_lt '++';
   decr_no_lt = white_space_no_lt '--';
   incr =       white_space '++';
   decr =       white_space '--';

   lshift =               '<<';
   rsignedshift =         '>>';
   runsignedshift =       '>>>';
   bit_and =              '&';
   bit_or =               '|';
   xor =                  '^';
   bang =                 '!';
   tilde =                '~';
   sc_and =               '&&';
   sc_or =                '||';
   hook =                 '?';
   colon =                ':';
   assign =               '=';
   plusassign =           '+=';
   minusassign =          '-=';
   starassign =           '*=';
   remassign =            '%=';
   lshiftassign =         '<<=';
   rsignedshiftassign =   '>>=';
   runsignedshiftassign = '>>>=';
   andassign =            '&=';
   orassign =             '|=';
   xorassign =            '^=';
   
   /**
    * DivPunctuator.
    */
   slashassign = '/=';
   slash =       '/';
    
   /**
    * 7.8.4. String Literals. [ECMA-262] pp. 18-19.
    */
   string_literal =
        '"' double_string_character* '"'
      | ''' single_string_character* '''
      ;

   /**
    * 7.8.5. Regular Expression Literals. [ECMA-262] pp. 20-21.
    */
   regular_expression_literal =
        '/' regular_expression_body '/' identifier_part*;

   /**
    * 7.6. Identifier. [ECMA-262] pp. 14-15.
    */
   identifier = identifier_start identifier_part*;


Ignored Tokens
   blank_no_lt,
   blank;


Productions
//
   program =
      {def} source_elements;

   // expressions

   primary_expression =
      {this} this |
      {identifier} identifier |
      {literal} literal |
      {array_literal} array_literal |
      {object_litera} object_literal |
      {expression} lparen expression rparen;

   primary_expression_no_lbf =
      {this} this |
      {identifier} identifier |
      {literal} literal |
      {array_literal} array_literal |
      {expression} lparen expression rparen;

   array_literal =
      {elision} lbracket elision? rbracket |
      {element_list} lbracket element_list rbracket |
      {element_list_elision} lbracket element_list comma elision? rbracket;

   element_list =
      {assign} elision? assignment_expression |
      {list} element_list comma elision? assignment_expression;

   elision =
      {comma} comma |
      {elision} elision comma;

   object_literal =
      {empty} lbrace rbrace |
      {list} lbrace property_name_and_value_list rbrace;

   property_name_and_value_list =
      {property} property_name colon assignment_expression |
      {list} property_name_and_value_list comma property_name colon assignment_expression;

   property_name =
      {identifier} identifier |
      {string_literal} string_literal |
      {numeric_literal} numeric_literal;

   member_expression =
      {primary} primary_expression |
      {function} function_expression |
      {member_bracket} member_expression lbracket expression rbracket |
      {member_dot} member_expression dot identifier |
      {member_new} new member_expression arguments;

   member_expression_no_lbf =
      {primary} primary_expression_no_lbf |
      {member_bracket} member_expression_no_lbf lbracket expression rbracket |
      {member_dot} member_expression_no_lbf dot identifier |
      {member_new} new member_expression arguments;

   new_expression =
      {member} member_expression |
      {new} new new_expression;

   new_expression_no_lbf =
      {member} member_expression_no_lbf |
      {new} new new_expression;

   call_expression =
      {member} member_expression arguments |
      {args} call_expression arguments |
      {expression} call_expression lbracket expression rbracket |
      {identifier} call_expression dot identifier;

   call_expression_no_lbf =
      {member} member_expression_no_lbf arguments |
      {args} call_expression_no_lbf arguments |
      {expression} call_expression_no_lbf lbracket expression rbracket |
      {identifier} call_expression_no_lbf dot identifier;

   arguments =
      {empty} lparen rparen |
      {list} lparen argument_list rparen;

   argument_list =
      {assign} assignment_expression |
      {assign_list} argument_list comma assignment_expression;

   left_hand_side_expression =
      {new} new_expression |
      {call} call_expression;

   left_hand_side_expression_no_lbf =
      {new} new_expression_no_lbf |
      {call} call_expression_no_lbf;

   postfix_expression =
      {left} left_hand_side_expression |
      {left_incr} left_hand_side_expression incr_no_lt |
      {left_decr} left_hand_side_expression decr_no_lt;
//
//SPEC      {left_incr} left_hand_side_expression /* no line terminator here */ incr |
//SPEC      {left_decr} left_hand_side_expression /* no line terminator here */ decr;
//
   postfix_expression_no_lbf =
      {left} left_hand_side_expression_no_lbf |
      {left_incr} left_hand_side_expression_no_lbf incr_no_lt |
      {left_decr} left_hand_side_expression_no_lbf decr_no_lt;

   unary_expression =
      {postfix} postfix_expression |
      {delete} delete unary_expression |
      {void} void unary_expression |
      {typeof} typeof unary_expression |
      {incr_no_lt} incr_no_lt unary_expression |
      {decr_no_lt} decr_no_lt unary_expression |
      {incr} incr unary_expression |
      {decr} decr unary_expression |
      {plus} plus unary_expression |
      {minus} minus unary_expression |
      {tilde} tilde unary_expression |
      {bang} bang unary_expression;

   unary_expression_no_lbf =
      {postfix} postfix_expression_no_lbf |
      {delete} delete unary_expression |
      {void} void unary_expression |
      {typeof} typeof unary_expression |
      {incr_no_lt} incr_no_lt unary_expression |
      {decr_no_lt} decr_no_lt unary_expression |
      {incr} incr unary_expression |
      {decr} decr unary_expression |
      {plus} plus unary_expression |
      {minus} minus unary_expression |
      {tilde} tilde unary_expression |
      {bang} bang unary_expression;

   multiplicative_expression =
      {unary} unary_expression |
      {mul} multiplicative_expression star unary_expression |
      {div} multiplicative_expression slash unary_expression |
      {rem} multiplicative_expression rem unary_expression;

   multiplicative_expression_no_lbf =
      {unary} unary_expression_no_lbf |
      {mul} multiplicative_expression_no_lbf star unary_expression |
      {div} multiplicative_expression_no_lbf slash unary_expression |
      {rem} multiplicative_expression_no_lbf rem unary_expression;

   additive_expression =
      {mul} multiplicative_expression |
      {plus} additive_expression plus multiplicative_expression |
      {minus} additive_expression minus multiplicative_expression;

   additive_expression_no_lbf =
      {mul} multiplicative_expression_no_lbf |
      {plus} additive_expression_no_lbf plus multiplicative_expression |
      {minus} additive_expression_no_lbf minus multiplicative_expression;

   shift_expression =
      {add} additive_expression |
      {left} shift_expression lshift additive_expression |
      {right} shift_expression rsignedshift additive_expression |
      {run_right} shift_expression runsignedshift additive_expression;

   shift_expression_no_lbf =
      {add} additive_expression_no_lbf |
      {left} shift_expression_no_lbf lshift additive_expression |
      {right} shift_expression_no_lbf rsignedshift additive_expression |
      {run_right} shift_expression_no_lbf runsignedshift additive_expression;

   relational_expression =
      {shift} shift_expression |
      {lt} relational_expression lt shift_expression |
      {gt} relational_expression gt shift_expression |
      {le} relational_expression le shift_expression |
      {ge} relational_expression ge shift_expression |
      {instanceof} relational_expression instanceof shift_expression |
      {in} relational_expression in shift_expression;

   relational_expression_no_lbf =
      {shift} shift_expression_no_lbf |
      {lt} relational_expression_no_lbf lt shift_expression |
      {gt} relational_expression_no_lbf gt shift_expression |
      {le} relational_expression_no_lbf le shift_expression |
      {ge} relational_expression_no_lbf ge shift_expression |
      {instanceof} relational_expression_no_lbf instanceof shift_expression |
      {in} relational_expression_no_lbf in shift_expression;

   relational_expression_no_in =
      {shift} shift_expression |
      {lt} relational_expression_no_in lt shift_expression |
      {gt} relational_expression_no_in gt shift_expression |
      {le} relational_expression_no_in le shift_expression |
      {ge} relational_expression_no_in ge shift_expression |
      {instanceof} relational_expression_no_in instanceof shift_expression;

   equality_expression =
      {relational} relational_expression |
      {eq} equality_expression eq relational_expression |
      {ne} equality_expression ne relational_expression |
      {eqq} equality_expression eqq relational_expression |
      {neq} equality_expression neq relational_expression;

   equality_expression_no_lbf =
      {relational} relational_expression_no_lbf |
      {eq} equality_expression_no_lbf eq relational_expression |
      {ne} equality_expression_no_lbf ne relational_expression |
      {eqq} equality_expression_no_lbf eqq relational_expression |
      {neq} equality_expression_no_lbf neq relational_expression;

   equality_expression_no_in =
      {relational} relational_expression_no_in |
      {eq} equality_expression_no_in eq relational_expression_no_in |
      {ne} equality_expression_no_in ne relational_expression_no_in |
      {eqq} equality_expression_no_in eqq relational_expression_no_in |
      {neq} equality_expression_no_in neq relational_expression_no_in;
   
   bitwise_and_expression =
      {equality} equality_expression |
      {bit_and} bitwise_and_expression bit_and equality_expression;

   bitwise_and_expression_no_lbf =
      {equality} equality_expression_no_lbf |
      {bit_and} bitwise_and_expression_no_lbf bit_and equality_expression;

   bitwise_and_expression_no_in =
      {equality} equality_expression_no_in |
      {bit_and} bitwise_and_expression_no_in bit_and equality_expression_no_in;

   bitwise_xor_expression =
      {bit_and} bitwise_and_expression |
      {xor} bitwise_xor_expression xor bitwise_and_expression;

   bitwise_xor_expression_no_lbf =
      {bit_and} bitwise_and_expression_no_lbf |
      {xor} bitwise_xor_expression_no_lbf xor bitwise_and_expression;

   bitwise_xor_expression_no_in =
      {bit_and} bitwise_and_expression_no_in |
      {xor} bitwise_xor_expression_no_in xor bitwise_and_expression_no_in;

   bitwise_or_expression =
      {xor} bitwise_xor_expression |
      {bit_or} bitwise_or_expression bit_or bitwise_xor_expression;

   bitwise_or_expression_no_lbf =
      {xor} bitwise_xor_expression_no_lbf |
      {bit_or} bitwise_or_expression_no_lbf bit_or bitwise_xor_expression;

   bitwise_or_expression_no_in =
      {xor} bitwise_xor_expression_no_in |
      {bit_or} bitwise_or_expression_no_in bit_or bitwise_xor_expression_no_in;

   logical_and_expression =
      {bit_or} bitwise_or_expression |
      {logical_and} logical_and_expression sc_and bitwise_or_expression;

   logical_and_expression_no_lbf =
      {bit_or} bitwise_or_expression_no_lbf |
      {logical_and} logical_and_expression_no_lbf sc_and bitwise_or_expression;
   
   logical_and_expression_no_in =
      {bit_or} bitwise_or_expression_no_in |
      {logical_and} logical_and_expression_no_in sc_and bitwise_or_expression_no_in;

   logical_or_expression =
      {logical_and} logical_and_expression |
      {logical_or} logical_or_expression sc_or logical_and_expression;

   logical_or_expression_no_lbf =
      {logical_and} logical_and_expression_no_lbf |
      {logical_or} logical_or_expression_no_lbf sc_or logical_and_expression;
   
   logical_or_expression_no_in =
      {logical_and} logical_and_expression_no_in |
      {logical_or} logical_or_expression_no_in sc_or logical_and_expression_no_in;

   conditional_expression =
      {logical_or} logical_or_expression |
      {cond} logical_or_expression hook [true]:assignment_expression colon [false]: assignment_expression;

   conditional_expression_no_lbf =
      {logical_or} logical_or_expression_no_lbf |
      {cond} logical_or_expression_no_lbf hook [true]:assignment_expression colon [false]: assignment_expression;

   conditional_expression_no_in =
      {logical_or} logical_or_expression_no_in |
      {cond} logical_or_expression_no_in hook
            [true]:assignment_expression_no_in colon [false]: assignment_expression_no_in;

   assignment_expression =
      {cond} conditional_expression |
      {left} left_hand_side_expression assignment_operator assignment_expression;

   assignment_expression_no_lbf =
      {cond} conditional_expression_no_lbf |
      {left} left_hand_side_expression_no_lbf assignment_operator assignment_expression;

   assignment_expression_no_in =
      {cond} conditional_expression_no_in |
      {left} left_hand_side_expression assignment_operator assignment_expression_no_in;

   assignment_operator =
      {assign} assign |
      {starassign} starassign |
      {slashassign} slashassign |
      {remassign} remassign |
      {plusassign} plusassign |
      {minusassign} minusassign |
      {lshiftassign} lshiftassign |
      {rsignedshiftassign} rsignedshiftassign |
      {runsignedshiftassign} runsignedshiftassign |
      {andassign} andassign |
      {xorassign} xorassign |
      {orassign} orassign;

   expression =
      {assign} assignment_expression |
      {list} expression comma assignment_expression;

   expression_no_lbf =
      {assign} assignment_expression_no_lbf |
      {list} expression_no_lbf comma assignment_expression;

   expression_no_in =
      {assign} assignment_expression_no_in |
      {list} expression_no_in comma assignment_expression_no_in;

   literal =
        {null}    null
      | {boolean} boolean_literal
      | {numeric} numeric_literal
      | {string}  string_literal
      ;

   numeric_literal =
        {decimal} decimal_literal
      | {hex}     hex_integer_literal
      ;

   boolean_literal =
        {true}  true
      | {false} false
      ;
//
/*
//----- BEGIN: NOT CONFORM TO SPEC -----
   literal =
      {null} null |
      {true} true |
      {false} false |
      {numeric} numeric_literal |
      {string} string_literal;

   numeric_literal =
      {decimal} decimal_integer_literal |
      {hex} hex_integer_literal |
      {octal} octal_integer_literal |
      {float} floating_point_literal;
//----- END: NOT CONFORM TO SPEC -----
*/
//
   // statements

   statement =
      {block} block |
      {var} variable_statement |
      {empty} empty_statement |
      {expression} expression_statement |
      {if} if_statement |
      {iteration} iteration_statement |
      {continue} continue_statement |
      {break} break_statement |
      {return} return_statement |
      {with} with_statement |
      {labelled} labelled_statement |
      {switch} switch_statement |
      {throw} throw_statement |
      {try} try_statement;

   statement_no_if =
      {block} block |
      {var} variable_statement |
      {empty} empty_statement |
      {expression} expression_statement |
      {if} if_statement_no_if |
      {iteration} iteration_statement_no_if |
      {continue} continue_statement |
      {break} break_statement |
      {return} return_statement |
      {with} with_statement_no_if |
      {labelled} labelled_statement_no_if |
      {switch} switch_statement |
      {throw} throw_statement |
      {try} try_statement;

   block =
      {def} lbrace statement_list? rbrace;

   statement_list =
      {statement} statement |
      {list} statement_list statement;

   variable_statement =
      {def} var variable_declaration_list semicolon;

   variable_declaration_list =
      {declaration} variable_declaration |
      {list} variable_declaration_list comma variable_declaration;

   variable_declaration_list_no_in =
      {declaration} variable_declaration_no_in |
      {list} variable_declaration_list_no_in comma variable_declaration_no_in;
      
   variable_declaration =
      {def} identifier initialiser?;

   variable_declaration_no_in =
      {def} identifier initialiser_no_in?;
   
   initialiser =
      {def} assign assignment_expression;

   initialiser_no_in =
      {def} assign assignment_expression_no_in;

   empty_statement =
      {def} semicolon;

   expression_statement =
      {def} expression_no_lbf semicolon;
//
//SPEC      {def} /* [lookahead not_in {lbrace, function}] */ expression semicolon;
//   
   if_statement =
      {if_else} if lparen expression rparen [true]:statement_no_if else [false]:statement |
      {if} if lparen expression rparen statement;

   if_statement_no_if =
      {if_else} if lparen expression rparen [true]:statement_no_if else [false]:statement_no_if;

   iteration_statement =
      {do} do statement while lparen expression rparen semicolon |
      {while} while lparen expression rparen statement |
      {for} for lparen [init]:expression_no_in? [one]:semicolon [incr]:expression?
         [two]:semicolon [final]:expression? rparen  statement |
      {for_var} for lparen var variable_declaration_list_no_in [one]:semicolon [incr]:expression?
         [two]:semicolon [final]:expression? rparen statement |
      {for_in} for lparen left_hand_side_expression in expression  rparen  statement |
      {for_var_in} for lparen var variable_declaration_no_in in expression rparen statement;

   iteration_statement_no_if =
      {do} do statement while lparen expression rparen semicolon |
      {while} while lparen expression rparen statement_no_if |
      {for} for lparen [init]:expression_no_in? [one]:semicolon [incr]:expression?
         [two]:semicolon [final]:expression? rparen  statement_no_if |
      {for_var} for lparen var variable_declaration_list_no_in [one]:semicolon [incr]:expression?
         [two]:semicolon [final]:expression? rparen statement_no_if |
      {for_in} for lparen left_hand_side_expression in expression  rparen  statement_no_if |
      {for_var_in} for lparen var variable_declaration_no_in in expression rparen statement_no_if;

   continue_statement =
      {def} continue identifier? semicolon;
//
//SPEC      {def} continue /* no line terminator here */ identifier? semicolon;
//
   break_statement =
      {def} break identifier? semicolon;
//
//SPEC      {def} break /* no line terminator here */ identifier? semicolon;
//
   return_statement =
      {def} return expression? semicolon;
//
//SPEC      {def} return /* no line terminator here */ expression? semicolon;
//
   with_statement =
      {def} with lparen expression rparen statement;

   with_statement_no_if =
      {def} with lparen expression rparen statement_no_if;

   switch_statement =
      {def} switch lparen expression rparen case_block;

   case_block =
      {def} lbrace case_clauses? rbrace |
      {default} lbrace [one]:case_clauses? default_clause [two]:case_clauses? rbrace;

   case_clauses =
      {def} case_clause |
      {list} case_clauses case_clause;

   case_clause =
      {def} case expression colon statement_list?;

   default_clause =
      {def} default colon statement_list?;

   labelled_statement =
      {def} identifier colon statement;

   labelled_statement_no_if =
      {def} identifier colon statement_no_if;

   throw_statement =
      {def} throw expression semicolon;
//
//SPEC      {def} throw /* no line terminator here */ expression semicolon;
//
   try_statement =
      {catch} try block catch_prod |
      {finally} try block finally_prod |
      {try} try block catch_prod finally_prod;

   catch_prod =
      {def} catch lparen identifier rparen block;

   finally_prod =
      {def} finally block;

   // functions and programs

   function_declaration =
      {def} function identifier lparen formal_parameter_list? rparen lbrace function_body rbrace;

   function_expression =
      {def} function identifier? lparen formal_parameter_list? rparen lbrace function_body rbrace;

   formal_parameter_list =
      {one} identifier |
      {list} formal_parameter_list comma identifier;

   function_body =
      {def} source_elements;

   source_elements =
      {one} source_element |
      {list} source_elements source_element;

   source_element =
      {statement} statement |
      {function} function_declaration;

/*
   // -----------------------------------------------------------------------
   // for testing the Lexer only.
   // -----------------------------------------------------------------------

   script = script_token*;

   script_token =
        {res} reserved_word
      | {id}  identifier
      | {op}  punctuator
      | {num} numeric_literal
      | {str} string_literal
      ;

   reserved_word =
        {keyword} keyword
      | {future}  future_reserved_word
      | {null}    null
      | {boolean} boolean_literal
      ;

   keyword =
        {break}      break
      | {else}       else
      | {new}        new
      | {var}        var
      | {case}       case
      | {finally}    finally
      | {return}     return
      | {void}       void
      | {catch}      catch
      | {for}        for
      | {switch}     switch
      | {while}      while
      | {continue}   continue
      | {function}   function
      | {this}       this
      | {with}       with
      | {default}    default
      | {if}         if
      | {throw}      throw
      | {delete}     delete
      | {in}         in
      | {try}        try
      | {do}         do
      | {instanceof} instanceof
      | {typeof}     typeof
      ;
   
   future_reserved_word =
        {abstract}     abstract
      | {enum}         enum
      | {int}          int
      | {short}        short
      | {boolean}      boolean
      | {export}       export
      | {interface}    interface
      | {static}       static
      | {byte}         byte
      | {extends}      extends
      | {long}         long
      | {super}        super
      | {char}         char
      | {final}        final
      | {native}       native
      | {synchronized} synchronized
      | {class}        clazz
      | {float}        float
      | {package}      package
      | {throws}       throws
      | {const}        const
      | {goto}         goto
      | {private}      private
      | {transient}    transient
      | {debugger}     debugger
      | {implements}   implements
      | {protected}    protected
      | {volatile}     volatile
      | {double}       double
      | {import}       import
      | {public}       public
      ;

   punctuator =
        {lbrace}    lbrace
      | {rbrace}    rbrace
      | {lparen}    lparen
      | {rparen}    rparen
      | {lbracket}  lbracket
      | {rbracket}  rbracket
      | {dot}       dot
      | {semicolon} semicolon
      | {comma}     comma
      | {lt}        lt
      | {gt}        gt
      | {le}        le
      | {ge}        ge
      | {eq}        eq
      | {ne}        ne
      | {eqq}       eqq
      | {neq}       neq
      | {plus}      plus
      | {minus}     minus
      | {star}      star
      | {rem}       rem
      |
        {incr1} incr_no_lt
      | {decr1} decr_no_lt
      | {incr2} incr
      | {decr2} decr
      |
        {lshift}    lshift
      | {rsshift}   rsignedshift
      | {rushift}   runsignedshift
      | {band}      bit_and
      | {bor}       bit_or
      | {xor}       xor
      | {bang}      bang
      | {bno}       tilde
      | {sand}      sc_and
      | {sor}       sc_or
      | {hook}      hook
      | {colon}     colon
      | {assign}    assign
      | {passign}   plusassign
      | {massign}   minusassign
      | {aasign}    starassign
      | {rassign}   remassign
      | {lsassign}  lshiftassign
      | {rssassign} rsignedshiftassign
      | {rusassign} runsignedshiftassign
      | {andassign} andassign
      | {orassign}  orassign
      | {xorassign} xorassign
      |
        {slashassign} slashassign
      | {slash}       slash
      ;
*/
