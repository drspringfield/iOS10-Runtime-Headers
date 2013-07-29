/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class CPZoneBorder;

@interface CPZoneBorderIntersection : NSObject <NSCopying, CPCopying> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } intersectionRect;
    CPZoneBorder *intersectingBorder;
    BOOL forwardVector;
    BOOL backwardVector;
}


- (void)setBackwardVector:(BOOL)arg1;
- (void)setForwardVector:(BOOL)arg1;
- (BOOL)backwardVector;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })intersectionRect;
- (id)intersectingBorder;
- (int)comparePositionLengthwise:(id)arg1;
- (void)setIntersectingBorder:(id)arg1;
- (void)setIntersectionRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initSuper;
- (BOOL)forwardVector;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
