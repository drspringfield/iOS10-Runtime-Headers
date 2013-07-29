/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class UIPDFDocument, UIImage, NSString, UIPDFSelection, NSMutableArray;

@interface UIPDFPage : NSObject  {
    struct CGPDFPage { } *_cgPage;
    unsigned int _pageNumber;
    NSString *_stringInReadingOrder;
    UIPDFSelection *_selection;
    int _lock;
    UIPDFDocument *_document;
    unsigned int _pageIndex;
    UIImage *_pageImage;
    NSMutableArray *_annotations;
}

@property(readonly) struct CGPDFPage { }* CGPage;
@property(readonly) unsigned int pageNumber;
@property(readonly) unsigned int pageIndex;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } cropBox;
@property(readonly) UIPDFDocument * document;
@property(retain) UIImage * pageImage;
@property(retain) UIPDFSelection * selection;


- (void)removeAllAnnotations;
- (id)copyPage;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })mediaBoxAccountForRotation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })mediaBox;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cropBoxAccountForRotation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cropBox;
- (void)deliverImageWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 receiver:(id)arg3 selector:(SEL)arg4 info:(id)arg5;
- (id)getImageIfAvailable;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2;
- (id)initWithDocument:(id)arg1 pageNumber:(unsigned int)arg2;
- (id)annotationIn:(id)arg1 withIndex:(unsigned int)arg2;
- (void)clearAnnotations;
- (unsigned long)cfCompareFlagsFromNSOptions:(unsigned int)arg1;
- (id)pageImage;
- (void)setPageImage:(id)arg1;
- (id)initWithCGPDFPage:(struct CGPDFPage { }*)arg1;
- (struct CGPDFPage { }*)CGPage;
- (void)addAnnotation:(id)arg1;
- (void)removeAnnotation:(id)arg1;
- (id)annotations;
- (struct CGSize { float x1; float x2; })size;
- (id)document;
- (void)setDocument:(id)arg1;
- (void)refresh;
- (unsigned int)rotation;
- (id)string;
- (void)dealloc;
- (id)findString:(id)arg1 fromSelection:(id)arg2 options:(unsigned int)arg3;
- (unsigned int)pageIndex;
- (unsigned int)pageNumber;
- (void)setSelection:(id)arg1;
- (id)selection;

@end
