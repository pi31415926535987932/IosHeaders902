/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:25 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface NACAudioRoute : NSObject {

	char _supportsVolumeControl;
	char _picked;
	NSString* _uniqueIdentifier;
	NSString* _routeName;
	int _routeType;
	int _routeSubtype;

}

@property (nonatomic,readonly) NSString * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * routeName;                     //@synthesize routeName=_routeName - In the implementation block
@property (nonatomic,readonly) int routeType;                            //@synthesize routeType=_routeType - In the implementation block
@property (nonatomic,readonly) int routeSubtype;                         //@synthesize routeSubtype=_routeSubtype - In the implementation block
@property (nonatomic,readonly) char supportsVolumeControl;               //@synthesize supportsVolumeControl=_supportsVolumeControl - In the implementation block
@property (getter=isPicked,nonatomic,readonly) char picked;              //@synthesize picked=_picked - In the implementation block
+(id)audioRouteWithMPAVRoute:(id)arg1 ;
+(id)buffersFromAudioRoutes:(id)arg1 ;
+(id)audioRoutesFromBuffers:(id)arg1 ;
+(int)_routeTypeFromMPAVRouteType:(int)arg1 ;
+(int)_routeTypeFromRouteBufferType:(int)arg1 ;
+(int)_routeSubtypeFromRouteBufferSubtype:(int)arg1 ;
+(id)audioRouteFromBuffer:(id)arg1 ;
+(int)_routeBufferTypeFromRouteType:(int)arg1 ;
+(int)_routeBufferSubtypeFromMPAVRouteSubtype:(int)arg1 ;
+(int)_routeBufferTypeFromMPAVRouteType:(int)arg1 ;
-(NSString *)routeName;
-(char)isPicked;
-(int)routeSubtype;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)uniqueIdentifier;
-(int)routeType;
-(id)initWithMPAVRoute:(id)arg1 ;
-(id)buffer;
-(void)setSupportsVolumeControl:(char)arg1 ;
-(char)supportsVolumeControl;
-(char)isEqualToAudioRoute:(id)arg1 ;
@end

