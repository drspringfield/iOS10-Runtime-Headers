/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSData, NSString;

@interface NSData : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
}

@property(readonly) NSData * SHA1Data;
@property(readonly) NSString * SHA1HexString;

+ (id)dataWithContentsOfFile:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
+ (id)dataWithContentsOfURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
+ (id)data;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)dataWithContentsOfFile:(id)arg1;
+ (id)dataWithData:(id)arg1;
+ (id)dataWithContentsOfURL:(id)arg1;
+ (id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2;
+ (id)dataWithBytes:(const void*)arg1 length:(unsigned int)arg2;
+ (id)dataWithContentsOfMappedFile:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3;
+ (id)dataWithRandomBytes:(unsigned int)arg1;
+ (id)dataWithHexString:(id)arg1;
+ (id)MCDataWithCFData:(struct __CFData { }*)arg1;
+ (id)MCDataWithHexString:(id)arg1;
+ (id)dataWithSockAddr:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1;
+ (void)_gkLoadRemoteImageDataForURL:(id)arg1 queue:(id)arg2 handler:(id)arg3;
+ (id)dataForRadioRequestParameters:(id)arg1 protocolVersion:(int)arg2 isAsynchronousBackgroundRequest:(BOOL)arg3 error:(id*)arg4;
+ (id)dataForRadioRequestParameters:(id)arg1 isAsynchronousBackgroundRequest:(BOOL)arg2 error:(id*)arg3;
+ (id)mappedDataWithContentsOfTemporaryFile:(id)arg1 error:(id*)arg2;
+ (id)nsDataWithOcBinaryData:(const struct OcBinaryData { int (**x1)(); unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; char *x6; boolx7; struct SsrwOOStream {} *x8; }*)arg1;
+ (id)dataWithHexString:(id)arg1 stringIsUppercase:(BOOL)arg2;
+ (id)dataWithHexString:(id)arg1;

- (id)base64EncodedStringWithOptions:(unsigned int)arg1;
- (id)initWithBase64EncodedString:(id)arg1 options:(unsigned int)arg2;
- (id)initWithBase64Encoding:(id)arg1;
- (id)base64Encoding;
- (id)initWithBytes:(void*)arg1 length:(unsigned int)arg2 copy:(BOOL)arg3 freeWhenDone:(BOOL)arg4 bytesAreVM:(BOOL)arg5;
- (unsigned int)length;
- (unsigned long)_cfTypeID;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)getBytes:(void*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (const void*)bytes;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 error:(id*)arg3;
- (id)base64EncodedDataWithOptions:(unsigned int)arg1;
- (id)initWithBase64EncodedData:(id)arg1 options:(unsigned int)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfData:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (id)initWithContentsOfFile:(id)arg1 error:(id*)arg2;
- (id)initWithContentsOfMappedFile:(id)arg1 error:(id*)arg2;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2 deallocator:(id)arg3;
- (BOOL)writeToURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (const void*)_bytesIfCompact;
- (void)getBytes:(void*)arg1;
- (BOOL)_allowsDirectEncoding;
- (id)_asciiDescription;
- (id)_base64EncodingAsString:(BOOL)arg1 withOptions:(unsigned int)arg2;
- (id)_initWithBase64EncodedObject:(id)arg1 options:(unsigned int)arg2;
- (void)enumerateByteRangesUsingBlock:(id)arg1;
- (id)_initWithBase64EncodedCharacterEnumerator:(id)arg1 length:(unsigned int)arg2 options:(unsigned int)arg3;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)initWithContentsOfMappedFile:(id)arg1;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2;
- (BOOL)writeToFile:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (void)getBytes:(void*)arg1 length:(unsigned int)arg2;
- (BOOL)_canReplaceWithDispatchDataForXPCCoder;
- (BOOL)isEqualToData:(id)arg1;
- (id)initWithData:(id)arg1;
- (BOOL)_isDispatchData;
- (id)initWithBytes:(const void*)arg1 length:(unsigned int)arg2;
- (id)initWithBytes:(void*)arg1 length:(unsigned int)arg2 copy:(BOOL)arg3 deallocator:(id)arg4;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (id)replacementObjectForCoder:(id)arg1;
- (Class)classForCoder;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)subdataWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3;
- (BOOL)isNSData__;
- (id)_replaceCString:(const char *)arg1 withCString:(const char *)arg2;
- (id)_web_parseRFC822HeaderFields;
- (id)_web_guessedMIMETypeForExtension:(id)arg1;
- (id)_web_guessedMIMEType;
- (id)_web_guessedMIMETypeForXML;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)hexString;
- (id)hexStringOfBytes:(char *)arg1 withLength:(int)arg2;
- (id)SHA1HexString;
- (id)SHA1Data;
- (id)abDecodeVCardBase64;
- (id)abEncodeVCardBase64DataWithInitialLength:(unsigned int)arg1;
- (BOOL)abIsUTF16EntourageVCard;
- (id)abStringAtRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inEncoding:(unsigned int)arg2;
- (id)abDecodedUTF7;
- (id)_webkit_guessedMIMEType;
- (id)_webkit_guessedMIMETypeForXML;
- (int)_web_locationAfterFirstBlankLine;
- (BOOL)_web_startsWithBlankLine;
- (id)_webkit_parseRFC822HeaderFields;
- (BOOL)_web_isCaseInsensitiveEqualToCString:(const char *)arg1;
- (id)base64Decoded;
- (id)base64Encoded;
- (id)hexStringValue;
- (id)sha1Digest;
- (id)md5Digest;
- (id)_geo_newXPCData;
- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (id)MCInitWithBase64String:(id)arg1;
- (id)MCBase64String;
- (id)MCHexString;
- (id)_FTCopyGzippedData;
- (id)_FTOptionallyDecompressData;
- (id)_FTDecompressData;
- (id)_FTStringFromBaseData;
- (BOOL)CDXTicketIsRelatedToTicket:(id)arg1;
- (BOOL)CDXTicketWellFormed;
- (id)CDXTicketTrimmed;
- (BOOL)CDXTicketIsStub;
- (unsigned long long)CDXTicketSID;
- (struct CDXTicket { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; struct { unsigned char x_5_1_1[6]; unsigned short x_5_1_2; } x5; unsigned int x6; unsigned char x7[0]; }*)mutableCDXTicket;
- (const struct CDXTicket { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; struct { unsigned char x_5_1_1[6]; unsigned short x_5_1_2; } x5; unsigned int x6; unsigned char x7[0]; }*)CDXTicket;
- (id)CDXTicketExpirationDate;
- (int)CDXTicketPCNT;
- (int)CDXTicketPID;
- (unsigned int)CDXTicketRevision;
- (BOOL)CDXTicketIsHolePunch;
- (BOOL)CDXTicketIsReflected;
- (struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)sockAddr;
- (id)_gkMD5HashData;
- (id)_gkSHA1HashData;
- (id)_gkMD5HashString;
- (id)_gkSHA1HashString;
- (id)_gkBase64EncodedString;
- (id)initWithBase64EncodedString_gk:(id)arg1;
- (id)propertyListForRadioResponseReturningError:(id*)arg1 unparsedResponseDictionary:(id*)arg2;
- (id)propertyListForRadioResponseReturningError:(id*)arg1;
- (void)ml_bindToSQLiteStatement:(struct sqlite3_stmt { }*)arg1 atPosition:(int)arg2;
- (id)decompressedGzipDataUsingTemporaryFile;
- (id)decompressedGzipData;
- (id)MSHexString;
- (id)MSBase64Encoding;
- (id)MSInitWithBase64Encoding:(id)arg1;
- (void)pl_adviceDoNotNeed;
- (void)pl_adviceWillNeed;
- (unsigned int)pl_advisoryLength;
- (id)gzipInflate;
- (id)cr_md5DigestHexString;
- (BOOL)mf_immutable;
- (id)mf_subdataWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)mf_encodeBase64HeaderData;
- (id)mf_encodeModifiedBase64;
- (id)mf_encodeBase64;
- (id)mf_encodeBase64WithoutLineBreaks;
- (id)mf_decodeModifiedBase64;
- (id)mf_decodeBase64InRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg1;
- (id)mf_decodeBase64;
- (id)mf_decodeUuencoded;
- (id)mf_decodeQuotedPrintableForText:(BOOL)arg1;
- (id)mf_copyHexString;
- (id)mf_dataByConvertingUnixNewlinesToNetwork;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfCString:(const char *)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfCString:(const char *)arg1 options:(unsigned int)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfCString:(const char *)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfByteFromSet:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfData:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (id)mf_subdataFromIndex:(unsigned int)arg1;
- (id)mf_subdataToIndex:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfRFC822HeaderData;
- (id)mf_locationsOfUnixNewlinesNeedingConversion;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfByteFromSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)mf_MD5Digest;
- (id)lowercaseHexStringWithoutSpaces;
- (id)uppercaseHexStringWithoutSpaces;
- (id)hexString;
- (id)hexEncoding;
- (id)SHA256Hash;
- (id)fileSafeBase64Encoding;
- (id)SHA1Hash;
- (id)mf_createAttachmentWithFilename:(id)arg1 UTIType:(id)arg2;

@end
