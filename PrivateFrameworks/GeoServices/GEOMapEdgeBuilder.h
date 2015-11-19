/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:27 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@class GEOMapTileFinder, GEOMapAccess;

@interface GEOMapEdgeBuilder : GEOMapRequest {

	char _buildAhead;
	char _buildBehind;
	Matrix<float, 2, 1> _firstTilePoint;
	Matrix<float, 2, 1> _lastTilePoint;
	GEOMapTileFinder* _currentTileFinder;
	/*^block*/id _edgeHandler;
	unordered_set<_GEOTileKey, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, std::__1::allocator<_GEOTileKey> >* _tileKeysSeen;
	char _searchDirection;

}

@property (nonatomic,copy) id edgeHandler;                      //@synthesize edgeHandler=_edgeHandler - In the implementation block
@property (nonatomic,readonly) GEOMapAccess * map; 
-(void)cancel;
-(void)dealloc;
-(char)_findEdgeBehindInTile:(id)arg1 ;
-(char)_shouldFindEdgeBehind;
-(id)_firstTile;
-(void)_buildCompleteEdge;
-(Matrix<float, 2, 1>)_firstPoint;
-(unsigned)_maxTileCount;
-(char)_findEdgeAheadInTile:(id)arg1 ;
-(char)_shouldFindEdgeAhead;
-(id)_lastTile;
-(Matrix<float, 2, 1>)_lastPoint;
-(id)_tileFinderForMap:(id)arg1 center:(SCD_Struct_GE16)arg2 radius:(double)arg3 ;
-(char)_pointConnects:(const Matrix<float, 2, 1>*)arg1 rect:(const SCD_Struct_GE57*)arg2 to:(const SCD_Struct_GE16*)arg3 ;
-(id)edgeHandler;
-(char)_edgeStart:(const Matrix<float, 2, 1>*)arg1 end:(const Matrix<float, 2, 1>*)arg2 connectsTo:(const SCD_Struct_GE16*)arg3 rect:(const SCD_Struct_GE57*)arg4 ;
-(void)_findTilesAdjacentToTile:(const GEOTileKey*)arg1 containingPoint:(const Matrix<float, 2, 1>*)arg2 findAhead:(char)arg3 ;
-(void)buildEdge:(/*^block*/id)arg1 ;
-(id)initWithMap:(id)arg1 ;
-(void)setEdgeHandler:(id)arg1 ;
-(char)_findEdgeBehind;
-(char)_findEdgeAhead;
-(char)_findNextEdge;
-(GEOMapAccess *)map;
@end

