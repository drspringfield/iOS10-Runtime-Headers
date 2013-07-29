/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/QuickLook.framework/QuickLook
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSData, NSURL, NSError, NSThread, NSURLRequest, NSSet, NSURLConnection, NSString, NSMutableSet, NSMutableDictionary, NSURLResponse;

@interface QLPreviewParts : NSObject  {
    NSURL *_url;
    NSData *_data;
    NSString *_fileName;
    NSString *_uti;
    NSString *_password;
    BOOL _progressive;
    void *_convertFunction;
    NSURLConnection *_connection;
    id _delegate;
    int _pageCount;
    float _pageWidth;
    float _pageHeight;
    NSURL *previewURL;
    NSURLResponse *previewResponse;
    NSMutableSet *registeredURLs;
    NSMutableSet *outstandingURLs;
    NSMutableDictionary *encodingsForURLs;
    NSThread *delegateCallbackThread;
    NSError *mainError;
    BOOL computed;
    BOOL cancelled;
    const void *representedObject;
    struct { 
        int version; 
        int (*retain)(); 
        int (*release)(); 
        int (*copyDescription)(); 
        int (*equal)(); 
    } representedObjectCallbacks;
    long representedObjectProtection;
    NSMutableDictionary *dumpFileHandles;
    BOOL dumpToDisk;
    BOOL htmlErrorDisabled;
}

@property(retain) NSURL * url;
@property(retain) NSData * data;
@property(retain) NSString * fileName;
@property(retain) NSString * uti;
@property(retain) NSString * password;
@property BOOL progressive;
@property(retain) NSURLConnection * connection;
@property id delegate;
@property BOOL htmlErrorDisabled;
@property(readonly) NSURLRequest * previewRequest;
@property(readonly) NSURLResponse * previewResponse;
@property(readonly) NSURL * previewURL;
@property(readonly) NSSet * attachmentURLs;
@property(readonly) int pageCount;
@property(readonly) float pageWidth;
@property(readonly) float pageHeight;
@property(getter=isComputed,readonly) BOOL computed;
@property(getter=isCancelled,readonly) BOOL cancelled;

+ (id)relativeStringForSafeURL:(id)arg1;
+ (id)safeURLScheme;
+ (BOOL)isSafeRequest:(id)arg1;
+ (BOOL)isSafeURL:(id)arg1;
+ (void)unregisterPreview:(id)arg1;
+ (void)registerPreview:(id)arg1;

- (id)previewURL;
- (float)pageHeight;
- (float)pageWidth;
- (void)setProgressive:(BOOL)arg1;
- (BOOL)progressive;
- (unsigned long)cfEncodingForAttachmentURL:(id)arg1;
- (id)attachmentURLs;
- (id)newSafeAttachmentURLWithID:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3;
- (id)newAttachmentURLWithID:(id)arg1 properties:(id)arg2;
- (const void*)documentObject;
- (void)setDocumentObject:(const void*)arg1 callbacks:(const struct { int x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); }*)arg2;
- (void)_dumpData:(id)arg1 withURL:(id)arg2 lastChunk:(BOOL)arg3;
- (void)_registerURL:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3;
- (void)startDataRepresentationWithContentType:(id)arg1 properties:(id)arg2;
- (void)_discardRepresentedObjectSafely;
- (void)computePreview;
- (void)_protectRepresentedObjectSafely;
- (void)computePreviewInThread;
- (id)_requestForURL:(id)arg1;
- (id)_voidRequest;
- (id)mimeTypeForAttachmentURL:(id)arg1;
- (void)appendData:(id)arg1 forURL:(id)arg2 lastChunk:(BOOL)arg3;
- (BOOL)htmlErrorDisabled;
- (void)setHtmlErrorDisabled:(BOOL)arg1;
- (void)startComputingPreview;
- (id)uti;
- (BOOL)isComputed;
- (void)setUti:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setPassword:(id)arg1;
- (id)previewResponse;
- (id)safeRequestForRequest:(id)arg1;
- (id)previewRequest;
- (id)data;
- (id)password;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)cancel;
- (void)setError:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setUrl:(id)arg1;
- (int)pageCount;
- (void)setData:(id)arg1;
- (id)connection;
- (id)url;
- (BOOL)isCancelled;
- (id)fileName;

@end
