/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class GKFairPlaySAPSession, NSURLRequestInternal;

@interface NSURLRequest : NSObject <NSSecureCoding, NSCopying, NSMutableCopying> {
    NSURLRequestInternal *_internal;
}

@property(retain) GKFairPlaySAPSession * SAPSession;

+ (id)requestWithURL:(id)arg1;
+ (id)requestWithURL:(id)arg1 cachePolicy:(unsigned int)arg2 timeoutInterval:(double)arg3;
+ (void)setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2;
+ (void)setAllowsAnyHTTPSCertificate:(BOOL)arg1 forHost:(id)arg2;
+ (double)defaultTimeoutInterval;
+ (void)setDefaultTimeoutInterval:(double)arg1;
+ (void)checkForSharedCookieStoreNeed:(struct _CFURLRequest { }*)arg1;
+ (BOOL)allowsAnyHTTPSCertificateForHost:(id)arg1;
+ (id)allowsSpecificHTTPSCertificateForHost:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)init;
- (id)initWithURL:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)HTTPShouldUsePipelining;
- (BOOL)allowsCellularAccess;
- (unsigned int)networkServiceType;
- (id)_initWithCFURLRequest:(struct _CFURLRequest { }*)arg1;
- (id)valueForHTTPHeaderField:(id)arg1;
- (id)HTTPBody;
- (id)HTTPBodyStream;
- (struct _CFURLRequest { }*)_CFURLRequest;
- (id)allHTTPHeaderFields;
- (BOOL)HTTPShouldHandleCookies;
- (id)mainDocumentURL;
- (id)HTTPMethod;
- (id)initWithURL:(id)arg1 cachePolicy:(unsigned int)arg2 timeoutInterval:(double)arg3;
- (id)URL;
- (id)contentDispositionEncodingFallbackArray;
- (id)HTTPUserAgent;
- (id)HTTPReferrer;
- (id)HTTPExtraCookies;
- (id)HTTPContentType;
- (id)boundInterfaceIdentifier;
- (double)timeoutInterval;
- (unsigned int)cachePolicy;
- (id)_copyReplacingURLWithURL:(id)arg1;
- (void)_removePropertyForKey:(id)arg1;
- (void)_setProperty:(id)arg1 forKey:(id)arg2;
- (id)_propertyForKey:(id)arg1;
- (BOOL)_URLHasScheme:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)_web_isConditionalRequest;
- (id)_web_HTTPContentType;
- (id)_web_HTTPReferrer;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setSAPSession:(id)arg1;
- (id)SAPSession;
- (id)_gkDictionaryKey;
- (id)DARequestByApplyingStorageSession:(struct __CFURLStorageSession { }*)arg1;

@end
