/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface HLPURLDataCacheController : NSObject {
    long long  _URLSessionDataType;
    NSString * _cacheDirectory;
    unsigned long long  _cacheSize;
    NSMutableArray * _dataCacheArray;
    NSMutableDictionary * _dataCacheMap;
    NSString * _identifier;
    bool  _loaded;
    NSString * _locale;
    unsigned long long  _maxDataCacheSize;
}

@property (nonatomic, retain) NSMutableArray *dataCacheArray;
@property (nonatomic, retain) NSString *locale;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addDataCache:(id)arg1;
- (id)cacheFileURLForDataCache:(id)arg1;
- (id)cacheFileURLForIdentifier:(id)arg1;
- (id)cacheFileURLForPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)cacheValidForPath:(id)arg1;
- (void)createCacheDirectory;
- (id)dataCacheArray;
- (id)dataCacheForPath:(id)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 directoryName:(id)arg2 maxCacheSize:(unsigned long long)arg3 URLSessionDataType:(long long)arg4;
- (void)load;
- (id)locale;
- (void)moveCacheToEnd:(id)arg1;
- (id)newDataCache;
- (void)removeAllDataCache;
- (void)removeDataCache:(id)arg1;
- (void)removeDataCache:(id)arg1 updateCache:(bool)arg2;
- (id)saveTemporaryFileToCache:(id)arg1 data:(id)arg2 lastModified:(id)arg3;
- (void)setDataCacheArray:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)unload;
- (void)updateCache;
- (void)updateCacheDelay;

@end