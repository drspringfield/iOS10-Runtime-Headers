/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableData, NSString, NSURLConnection;

@interface MCHTTPRequestor : NSObject <NSURLConnectionDataDelegate> {
    BOOL _didFailDueToMissingCredentials;
    BOOL _shouldUseResponseBodyAsLoginPrompt;
    NSURLConnection *_connection;
    NSMutableData *_responseData;
    NSString *_username;
    NSString *_password;
    NSArray *_anchorCertificates;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    id _selfReference;
}

@property(retain) NSURLConnection * connection;
@property(retain) NSMutableData * responseData;
@property(copy) NSString * username;
@property(copy) NSString * password;
@property(retain) NSArray * anchorCertificates;
@property(copy) id completionBlock;
@property(retain) id selfReference;
@property BOOL didFailDueToMissingCredentials;
@property BOOL shouldUseResponseBodyAsLoginPrompt;


- (id)selfReference;
- (void)startWithRequest:(id)arg1 username:(id)arg2 password:(id)arg3 anchorCertificates:(id)arg4 completionBlock:(id)arg5;
- (void)didFinishWithError:(id)arg1;
- (BOOL)shouldUseResponseBodyAsLoginPrompt;
- (BOOL)didFailDueToMissingCredentials;
- (id)anchorCertificates;
- (void)setShouldUseResponseBodyAsLoginPrompt:(BOOL)arg1;
- (void)setDidFailDueToMissingCredentials:(BOOL)arg1;
- (void)setSelfReference:(id)arg1;
- (void)setAnchorCertificates:(id)arg1;
- (void)setResponseData:(id)arg1;
- (id)responseData;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;
- (id)init;
- (id)password;
- (void).cxx_destruct;
- (void)setConnection:(id)arg1;
- (void)setCompletionBlock:(id)arg1;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (id)connection;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)completionBlock;

@end
