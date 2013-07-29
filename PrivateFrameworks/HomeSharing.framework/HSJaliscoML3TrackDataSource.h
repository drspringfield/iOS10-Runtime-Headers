/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class NSNumber, NSDictionary;

@interface HSJaliscoML3TrackDataSource : HSDAAPML3TrackDataSource  {
    NSDictionary *_chapterDataForAdamIDs;
    NSDictionary *_flavorDataForAdamIDs;
    NSNumber *_accountID;
    long long _preferredVideoQuality;
}

@property long long preferredVideoQuality;


- (id)createImportItem;
- (id)initWithItemsResponseData:(id)arg1 flavorDataForAdamIDs:(id)arg2 chapterDataForAdamIDs:(id)arg3;
- (void)setPreferredVideoQuality:(long long)arg1;
- (long long)preferredVideoQuality;
- (void)invalidate;
- (void)dealloc;

@end
