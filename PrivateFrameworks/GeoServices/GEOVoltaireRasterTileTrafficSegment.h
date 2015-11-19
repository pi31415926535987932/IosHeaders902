/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:24 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOVoltaireRasterTileTrafficSegment : NSObject {

	SCD_Struct_GE94* _vertices;
	int _vertexCount;
	char _hasSpeed;
	int _speed;
	char _hasWidth;
	int _width;

}

@property (nonatomic,readonly) SCD_Struct_GE94* vertices;              //@synthesize vertices=_vertices - In the implementation block
@property (nonatomic,readonly) int vertexCount;                        //@synthesize vertexCount=_vertexCount - In the implementation block
@property (assign,nonatomic) char hasSpeed;                            //@synthesize hasSpeed=_hasSpeed - In the implementation block
@property (assign,nonatomic) int speed;                                //@synthesize speed=_speed - In the implementation block
@property (assign,nonatomic) char hasWidth;                            //@synthesize hasWidth=_hasWidth - In the implementation block
@property (assign,nonatomic) int width;                                //@synthesize width=_width - In the implementation block
-(void)setSpeed:(int)arg1 ;
-(int)speed;
-(int)width;
-(void)setWidth:(int)arg1 ;
-(char)hasWidth;
-(void)setHasWidth:(char)arg1 ;
-(void)setHasSpeed:(char)arg1 ;
-(int)vertexCount;
-(SCD_Struct_GE94*)vertices;
-(void)setVertices:(SCD_Struct_GE94*)arg1 count:(int)arg2 ;
-(char)hasSpeed;
@end

