/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSData, NSMutableArray, GEOVConnectivity;

@interface GEOVTile : PBCodable  {
    NSMutableArray *_coastlines;
    GEOVConnectivity *_connectivity;
    NSMutableArray *_labelLanguages;
    NSData *_labels;
    NSMutableArray *_lines;
    int _minZ;
    NSMutableArray *_points;
    NSMutableArray *_polygons;
    unsigned int _sectionDeltaLengthBits;
    unsigned int _vertexBits;
    NSData *_vertices;
    int _zBits;
    struct { 
        unsigned int minZ : 1; 
        unsigned int sectionDeltaLengthBits : 1; 
        unsigned int vertexBits : 1; 
        unsigned int zBits : 1; 
    } _has;
}

@property(retain) NSMutableArray * lines;
@property(retain) NSMutableArray * polygons;
@property(retain) NSMutableArray * points;
@property(readonly) BOOL hasLabels;
@property(retain) NSData * labels;
@property(readonly) BOOL hasVertices;
@property(retain) NSData * vertices;
@property(readonly) BOOL hasConnectivity;
@property(retain) GEOVConnectivity * connectivity;
@property BOOL hasMinZ;
@property int minZ;
@property BOOL hasZBits;
@property int zBits;
@property(retain) NSMutableArray * coastlines;
@property(retain) NSMutableArray * labelLanguages;
@property BOOL hasVertexBits;
@property unsigned int vertexBits;
@property BOOL hasSectionDeltaLengthBits;
@property unsigned int sectionDeltaLengthBits;


- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)labelLanguages;
- (void)setHasSectionDeltaLengthBits:(BOOL)arg1;
- (void)setHasVertexBits:(BOOL)arg1;
- (void)setHasZBits:(BOOL)arg1;
- (void)setHasMinZ:(BOOL)arg1;
- (void)setSectionDeltaLengthBits:(unsigned int)arg1;
- (unsigned int)sectionDeltaLengthBits;
- (BOOL)hasSectionDeltaLengthBits;
- (void)setVertexBits:(unsigned int)arg1;
- (unsigned int)vertexBits;
- (BOOL)hasVertexBits;
- (id)labelLanguageAtIndex:(unsigned int)arg1;
- (void)clearLabelLanguages;
- (unsigned int)labelLanguagesCount;
- (id)coastlinesAtIndex:(unsigned int)arg1;
- (void)clearCoastlines;
- (void)setZBits:(int)arg1;
- (int)zBits;
- (BOOL)hasZBits;
- (void)setMinZ:(int)arg1;
- (int)minZ;
- (BOOL)hasMinZ;
- (id)connectivity;
- (BOOL)hasConnectivity;
- (BOOL)hasLabels;
- (id)pointAtIndex:(unsigned int)arg1;
- (void)clearPoints;
- (unsigned int)pointsCount;
- (id)polygonAtIndex:(unsigned int)arg1;
- (void)clearPolygons;
- (id)lineAtIndex:(unsigned int)arg1;
- (void)clearLines;
- (void)addLabelLanguage:(id)arg1;
- (void)addCoastlines:(id)arg1;
- (void)addPolygon:(id)arg1;
- (void)addLine:(id)arg1;
- (void)setLabelLanguages:(id)arg1;
- (void)setCoastlines:(id)arg1;
- (void)setConnectivity:(id)arg1;
- (void)setLabels:(id)arg1;
- (void)setPoints:(id)arg1;
- (void)setPolygons:(id)arg1;
- (void)setLines:(id)arg1;
- (unsigned int)coastlinesCount;
- (id)coastlines;
- (unsigned int)polygonsCount;
- (id)polygons;
- (unsigned int)linesCount;
- (id)lines;
- (id)vertices;
- (BOOL)hasVertices;
- (void)setVertices:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)points;
- (id)labels;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (void)addPoint:(id)arg1;
- (id)dictionaryRepresentation;

@end
