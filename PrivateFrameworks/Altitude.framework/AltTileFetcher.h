/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Altitude.framework/Altitude
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class GEOTileLoader;

@interface AltTileFetcher : NSObject  {
    GEOTileLoader *_geoTileLoader;
    struct KaroMapImp<_GEOTileKey, std::__1::shared_ptr<altitude::GeoServicesLoadJob>, GEOTileKeyComp> { 
        int (**_vptr$ReflectionInterface)(); 
        struct ReflectionBase {} *mPartOf; 
        struct BitField<unsigned int> { 
            unsigned int mField; 
        } mFlags; 
        unsigned int mMappingsCount; 
        struct _GEOTileKey { 
            unsigned int z : 6; 
            unsigned int x : 26; 
            unsigned int y : 26; 
            unsigned int type : 6; 
            unsigned int pixelSize : 8; 
            unsigned int textScale : 8; 
            unsigned int provider : 8; 
            unsigned int expires : 1; 
            unsigned int reserved1 : 7; 
            unsigned char reserved2[4]; 
        } mDefaultKey; 
        struct shared_ptr<altitude::GeoServicesLoadJob> { 
            struct GeoServicesLoadJob {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } mDefaultValue; 
        unsigned int mT0Flags; 
        unsigned int mT1Flags; 
        struct map<_GEOTileKey, std::__1::shared_ptr<altitude::GeoServicesLoadJob>, GEOTileKeyComp, std::__1::allocator<std::__1::pair<const _GEOTileKey, std::__1::shared_ptr<altitude::GeoServicesLoadJob> > > > { 
            struct __tree<std::__1::pair<_GEOTileKey, std::__1::shared_ptr<altitude::GeoServicesLoadJob> >, std::__1::__map_value_compare<_GEOTileKey, std::__1::shared_ptr<altitude::GeoServicesLoadJob>, GEOTileKeyComp, true>, std::__1::allocator<std::__1::pair<_GEOTileKey, std::__1::shared_ptr<altitude::GeoServicesLoadJob> > > > { 
                struct __tree_node<std::__1::pair<_GEOTileKey, std::__1::shared_ptr<altitude::GeoServicesLoadJob> >, void *> {} *__begin_node_; 
                struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<_GEOTileKey, std::__1::shared_ptr<altitude::GeoServicesLoadJob> >, void *> > > { 
                    struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                        struct __tree_node_base<void *> {} *__left_; 
                    } __first_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__1::__map_value_compare<_GEOTileKey, std::__1::shared_ptr<altitude::GeoServicesLoadJob>, GEOTileKeyComp, true> > { 
                    unsigned long __first_; 
                } __pair3_; 
            } __tree_; 
        } mMap; 
    } _keyToJobMap;
    struct Mutex { 
        void *mMutex; 
    } _mutex;
    unsigned int _numDownloads;
}


- (void)purgeExpired:(double)arg1;
- (void)cancelRequests;
- (void)updateJobPriority:(struct shared_ptr<altitude::GeoServicesLoadJob> { struct GeoServicesLoadJob {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (void)cancelJob:(struct shared_ptr<altitude::GeoServicesLoadJob> { struct GeoServicesLoadJob {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (void)fetchDataForJob:(struct shared_ptr<altitude::GeoServicesLoadJob> { struct GeoServicesLoadJob {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (struct shared_ptr<altitude::GeoServicesLoadJob> { struct GeoServicesLoadJob {} *x1; struct __shared_weak_count {} *x2; })getJobForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)reportCorruptTile:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (BOOL)isDownloading;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
