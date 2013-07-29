/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CATiledLayer : CALayer  {
}

@property struct CGColor { }* fillColor;
@property float maximumTileScale;
@property(getter=isDrawingEnabled) BOOL drawingEnabled;
@property unsigned long levelsOfDetail;
@property unsigned long levelsOfDetailBias;
@property struct CGSize { float x1; float x2; } tileSize;

+ (unsigned int)prefetchedTiles;
+ (double)fadeDuration;
+ (BOOL)shouldDrawOnMainThread;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (id)displayUncollectableOptions;
+ (id)displayDisableFadeOptions;

- (void)displayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 levelOfDetail:(int)arg2 options:(id)arg3;
- (void)setLevelsOfDetailBias:(unsigned long)arg1;
- (void)setLevelsOfDetail:(unsigned long)arg1;
- (void)setTileSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setFillColor:(struct CGColor { }*)arg1;
- (void)setDrawingEnabled:(BOOL)arg1;
- (void)setMaximumTileScale:(float)arg1;
- (BOOL)canDrawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 levelOfDetail:(int)arg2;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 levelOfDetail:(int)arg2;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 levelOfDetail:(int)arg2 options:(id)arg3;
- (float)maximumTileScale;
- (struct CGSize { float x1; float x2; })tileSize;
- (unsigned long)levelsOfDetailBias;
- (unsigned long)levelsOfDetail;
- (BOOL)isDrawingEnabled;
- (struct CGColor { }*)fillColor;
- (BOOL)_canDisplayConcurrently;
- (void)_display;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_dealloc;
- (void)setContents:(id)arg1;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (void)dealloc;
- (void)invalidateContents;
- (void)displayInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 levelOfDetail:(int)arg2 options:(id)arg3;
- (void)setNeedsDisplayInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 levelOfDetail:(int)arg2 options:(id)arg3;
- (void)setNeedsDisplayInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 levelOfDetail:(int)arg2;

@end
