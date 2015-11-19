/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:31 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOMapTransitPoint.h>

@class NSString, GEOMapAccess;

@interface GEOMapTransitNodeBaseImpl : NSObject <GEOMapTransitPoint> {

	GEOMapAccess* _map;
	shared_ptr<geo::MapNodeTransit>* _node;
	double _boundingRadius;
	SCD_Struct_GE57 _boundingRect;
	SCD_Struct_GE16* _polygonPoints;
	int _polygonPointsCount;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_GE16 coordinate; 
@property (nonatomic,readonly) unsigned long long transitID; 
@property (nonatomic,readonly) NSString * internalName; 
@property (nonatomic,readonly) double boundingRadius;                       //@synthesize boundingRadius=_boundingRadius - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE57 boundingRect;                //@synthesize boundingRect=_boundingRect - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE16* polygonPoints;              //@synthesize polygonPoints=_polygonPoints - In the implementation block
@property (nonatomic,readonly) int polygonPointsCount;                      //@synthesize polygonPointsCount=_polygonPointsCount - In the implementation block
-(SCD_Struct_GE16)coordinate;
-(void)dealloc;
-(NSString *)description;
-(SCD_Struct_GE57)boundingRect;
-(unsigned long long)transitID;
-(double)distanceInMetersFrom:(SCD_Struct_GE16)arg1 ;
-(id)findAccessPoints:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)findGeometryWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithMap:(id)arg1 node:(shared_ptr<geo::MapNodeTransit>*)arg2 ;
-(SCD_Struct_GE16*)polygonPoints;
-(int)polygonPointsCount;
-(double)boundingRadius;
-(NSString *)internalName;
@end

