/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLCameraImporterDelegate>, PLMutableCameraImportQueue, ICCameraDevice, PLImportFileManager, NSMutableArray, NSString, NSMutableDictionary, PLCameraImportQueue;

@interface PLCameraImporter : NSObject <ICDeviceDelegate, ICCameraDeviceDelegate> {
    id _delegate;
    NSMutableDictionary *_itemsMapping;
    NSMutableArray *_items;
    PLMutableCameraImportQueue *_thumbnailQueue;
    PLCameraImportQueue *_downloadQueue;
    PLCameraImportQueue *_importQueue;
    PLCameraImportQueue *_deleteQueue;
    NSMutableArray *_orphanItems;
    NSMutableArray *_coalescedDeletedItems;
    BOOL _importInProgress;
    NSMutableDictionary *_parentFolderMapping;
    BOOL _autosplitEvents;
    int _eventSplitGranularity;
    ICCameraDevice *_camera;
    PLImportFileManager *_importFileManager;
    BOOL _stopAfterNextItemImport;
    BOOL _importItemInProgress;
    NSString *importSessionIdentifier;
}

@property <PLCameraImporterDelegate> * delegate;
@property(retain) NSMutableDictionary * itemsMapping;
@property(retain) NSMutableArray * items;
@property(retain) ICCameraDevice * camera;
@property(copy) NSString * importSessionIdentifier;


- (void)didRemoveDevice:(id)arg1;
- (void)cameraDevice:(id)arg1 didReceiveMetadata:(id)arg2 forItem:(id)arg3 error:(id)arg4;
- (void)cameraDevice:(id)arg1 didReceiveThumbnail:(struct CGImage { }*)arg2 forItem:(id)arg3 error:(id)arg4;
- (void)cameraDevice:(id)arg1 didRemoveItems:(id)arg2;
- (void)deviceDidBecomeReady:(id)arg1;
- (void)device:(id)arg1 didCloseSessionWithError:(id)arg2;
- (void)device:(id)arg1 didOpenSessionWithError:(id)arg2;
- (void)cameraDevice:(id)arg1 didAddItems:(id)arg2;
- (void)setItemsMapping:(id)arg1;
- (void)stopImport;
- (void)importItems:(id)arg1;
- (unsigned long long)approximateBytesRequiredToImportItem:(id)arg1;
- (void)readThumbnailsForImportItems:(id)arg1;
- (void)readMetadataForImportItems:(id)arg1;
- (void)readImportItems;
- (id)allImportItems;
- (BOOL)isImporting;
- (unsigned int)contentPercentCompleted;
- (unsigned int)estimatedNumberOfItems;
- (void)ejectCamera;
- (id)cameraKind;
- (id)cameraName;
- (id)initWithDevice:(id)arg1 delegate:(id)arg2;
- (void)device:(id)arg1 didEncounterError:(id)arg2;
- (void)didReceiveMetadata:(id)arg1 forCameraFile:(id)arg2 error:(id)arg3;
- (void)didReceiveThumbnail:(struct CGImage { }*)arg1 forCameraFile:(id)arg2 error:(id)arg3;
- (void)_coalescedRemoveImportItems;
- (void)removeImportItemsForCameraFiles:(id)arg1;
- (void)cameraDidError:(id)arg1;
- (void)camaraDidEnumerateContents;
- (void)addImportItemsFromCameraFiles:(id)arg1;
- (void)didConnectToCamera:(id)arg1 error:(id)arg2;
- (void)didDisconnectFromCamera:(id)arg1 error:(id)arg2;
- (void)_removeImportItemsAtPathsInBackground:(id)arg1;
- (void)_deleteImportItems:(id)arg1;
- (void)_stopImport;
- (void)_deleteImportItemsFromDiskInBackground:(id)arg1;
- (void)_downloadImportItems:(id)arg1;
- (void)_photoLibraryFinishedImportForPhoto:(id)arg1 atPath:(id)arg2 error:(id)arg3;
- (void)_didFinishImportingItems:(id)arg1;
- (id)importSessionIdentifier;
- (void)didImportImportItem:(id)arg1 error:(id)arg2;
- (void)didDownloadFile:(id)arg1 error:(id)arg2 options:(id)arg3 contextInfo:(void*)arg4;
- (void)_separateItems:(id)arg1 intoEventsWithGranularity:(int)arg2;
- (void)_clearImportItemsForDownload:(id)arg1;
- (void)importImportItem:(id)arg1;
- (void)didReceiveThumbnail:(struct CGImage { }*)arg1 forImportItem:(id)arg2 error:(id)arg3;
- (void)_didFinishDeletingItems:(id)arg1;
- (void)_deleteImportItemFromDisk:(id)arg1;
- (void)_addImportItemFromCameraFile:(id)arg1;
- (id)itemsMapping;
- (id)importItemForCameraFile:(id)arg1;
- (void)setImportSessionIdentifier:(id)arg1;
- (void)didReceiveImportNotification:(id)arg1;
- (BOOL)deviceIsLocked;
- (void)setCamera:(id)arg1;
- (id)camera;
- (id)items;
- (void)removeItems:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)setItems:(id)arg1;

@end
