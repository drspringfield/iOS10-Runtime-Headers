/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class MKMapView, PLPlacesMapViewDelegate, NSArray, NSObject<PLDiagnosticsProvider>, PLPlaces;

@interface PUPlacesViewController : UIViewController <PlacesMapViewDelegateDetailsDelegate, PLAssetContainerObserver, PLAssetContainerListChangeObserver> {
    PLPlacesMapViewDelegate *_placesMapKitDelegate;
    PLPlaces *_places;
    struct NSObject { Class x1; } *_allPhotosAlbum;
    MKMapView *_mapView;
    BOOL _networkingEnabled;
    BOOL _refreshMapAfterResume;
    BOOL _suspended;
    BOOL _allowDetails;
    NSArray *_locationAssets;
    NSObject<PLDiagnosticsProvider> *_diagnosticsProvider;
}

@property BOOL allowDetails;
@property(copy) NSArray * locationAssets;
@property(retain) NSObject<PLDiagnosticsProvider> * diagnosticsProvider;


- (void)displayDetailsForAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)setLocationAssets:(id)arg1;
- (void)setAllowDetails:(BOOL)arg1;
- (void)_setNetworkingEnabled:(BOOL)arg1;
- (BOOL)allowDetails;
- (id)locationAssets;
- (void)setDiagnosticsProvider:(id)arg1;
- (id)diagnosticsProvider;
- (void)_handleReportButton:(id)arg1;
- (void)_updateNavItem;
- (BOOL)pu_wantsTabBarVisible;
- (void)assetContainerListDidChange:(id)arg1;
- (void)assetContainerDidChange:(id)arg1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;

@end
