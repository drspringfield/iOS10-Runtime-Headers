/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchRequest : GEOPlaceSearchRequest  {
    unsigned short _provider;
}

@property unsigned short provider;


- (Class)responseClass;
- (unsigned short)provider;
- (void)setDeviceGEOCoordinate:(struct { double x1; double x2; })arg1;
- (id)init;
- (void)setProvider:(unsigned short)arg1;
- (id)_mapkit_initWithLocalSearchRequest:(id)arg1;
- (id)_mapkit_initForCompletionsWithEntriesType:(int)arg1 listType:(int)arg2;

@end
