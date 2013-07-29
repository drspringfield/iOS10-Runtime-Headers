/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMutableAttributedString : NSAttributedString  {
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)setAttributedString:(id)arg1;
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned int)arg2;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)endEditing;
- (void)beginEditing;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withAttributedString:(id)arg2;
- (void)removeAttribute:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)addAttributes:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setAttributes:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withString:(id)arg2;
- (id)mutableString;
- (void)addAttributesWeakly:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)appendAttributedString:(id)arg1;
- (void)removeCharactersWithAttribute:(id)arg1;
- (void)replaceAttribute:(id)arg1 value:(id)arg2 withValue:(id)arg3;
- (void)trimWhitespace;
- (void)replaceNewlinesWithSpaces;
- (void)convertWritingDirectionToBidiControlCharacters;
- (BOOL)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3;
- (BOOL)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3;
- (BOOL)readFromFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (void)unscriptRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)subscriptRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)superscriptRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setAlignment:(int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)fixAttributesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })convertWritingDirectionToBidiControlCharactersForParagraphAtIndex:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })convertBidiControlCharactersToWritingDirectionForParagraphAtIndex:(unsigned int)arg1;
- (void)setBaseWritingDirection:(int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (BOOL)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (BOOL)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (void)_changeIntAttribute:(id)arg1 by:(int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (BOOL)_shouldSetOriginalFontAttribute;
- (void)fixAttachmentAttributeInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)fixParagraphStyleAttributeInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)fixFontAttributeInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)fixGlyphInfoAttributeInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_setAttributeFixingInProgress:(BOOL)arg1;
- (BOOL)_attributeFixingInProgress;
- (void)convertBidiControlCharactersToWritingDirection;
- (void)_ui_restoreOriginalFontAttributes;
- (void)MP_addAttributes:(id)arg1 toOccurrencesOfSubstring:(id)arg2 options:(unsigned int)arg3;
- (void)mf_setString:(id)arg1;
- (void)mf_removeAttribute:(id)arg1;
- (void)mf_addAttribute:(id)arg1 value:(id)arg2;

@end
