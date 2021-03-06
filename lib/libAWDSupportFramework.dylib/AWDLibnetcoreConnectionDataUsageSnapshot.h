/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDLibnetcoreConnectionDataUsageSnapshot : PBCodable <NSCopying> {
    unsigned long long  _bytesIn;
    unsigned long long  _bytesOut;
    struct { 
        unsigned int bytesIn : 1; 
        unsigned int bytesOut : 1; 
    }  _has;
}

@property (nonatomic) unsigned long long bytesIn;
@property (nonatomic) unsigned long long bytesOut;
@property (nonatomic) bool hasBytesIn;
@property (nonatomic) bool hasBytesOut;

- (unsigned long long)bytesIn;
- (unsigned long long)bytesOut;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBytesIn;
- (bool)hasBytesOut;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBytesIn:(unsigned long long)arg1;
- (void)setBytesOut:(unsigned long long)arg1;
- (void)setHasBytesIn:(bool)arg1;
- (void)setHasBytesOut:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
