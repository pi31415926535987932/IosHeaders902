/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:25 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoAudioControl/NanoAudioControl-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NACAudioRouteBuffer : PBCodable <NSCopying> {

	NSString* _routeName;
	int _routeSubtype;
	int _routeType;
	NSString* _uniqueIdentifier;
	char _picked;
	char _supportsVolumeControl;
	SCD_Struct_NA2 _has;

}

@property (nonatomic,readonly) char hasUniqueIdentifier; 
@property (nonatomic,retain) NSString * uniqueIdentifier;                //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) char hasRouteName; 
@property (nonatomic,retain) NSString * routeName;                       //@synthesize routeName=_routeName - In the implementation block
@property (assign,nonatomic) char hasRouteType; 
@property (assign,nonatomic) int routeType;                              //@synthesize routeType=_routeType - In the implementation block
@property (assign,nonatomic) char hasRouteSubtype; 
@property (assign,nonatomic) int routeSubtype;                           //@synthesize routeSubtype=_routeSubtype - In the implementation block
@property (assign,nonatomic) char hasSupportsVolumeControl; 
@property (assign,nonatomic) char supportsVolumeControl;                 //@synthesize supportsVolumeControl=_supportsVolumeControl - In the implementation block
@property (assign,nonatomic) char hasPicked; 
@property (assign,nonatomic) char picked;                                //@synthesize picked=_picked - In the implementation block
-(NSString *)routeName;
-(int)routeSubtype;
-(void)setRouteName:(NSString *)arg1 ;
-(void)setPicked:(char)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)routeType;
-(void)setHasRouteType:(char)arg1 ;
-(void)setRouteType:(int)arg1 ;
-(char)hasRouteType;
-(char)hasUniqueIdentifier;
-(char)hasRouteName;
-(void)setRouteSubtype:(int)arg1 ;
-(void)setHasRouteSubtype:(char)arg1 ;
-(char)hasRouteSubtype;
-(void)setHasPicked:(char)arg1 ;
-(char)hasPicked;
-(char)readFrom:(id)arg1 ;
-(char)picked;
-(void)setSupportsVolumeControl:(char)arg1 ;
-(void)setHasSupportsVolumeControl:(char)arg1 ;
-(char)hasSupportsVolumeControl;
-(char)supportsVolumeControl;
@end

