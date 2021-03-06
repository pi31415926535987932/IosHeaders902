/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreIndoor/CLIndoorXPCProvider.h>
#import <libobjc.A.dylib/CLIndoorXPCProviderImplementation.h>

@class ServiceState, NSString;

@interface CLIndoorPositionProvider : CLIndoorXPCProvider <CLIndoorXPCProviderImplementation> {

	ServiceState* _state;

}

@property (nonatomic,retain) ServiceState * state;                  //@synthesize state=_state - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)locationType:(id)arg1 ;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(void)setDelegate:(id)arg1 ;
-(ServiceState *)state;
-(void)setState:(ServiceState *)arg1 ;
-(void)setApiKey:(id)arg1 ;
-(void)setApiKey:(id)arg1 onServer:(id)arg2 ;
-(void)playbackDatarun:(id)arg1 ;
-(void)gpsEstimateAvailable:(id)arg1 ;
-(void)gpsSignalQualityAvailable:(id)arg1 ;
-(void)withinQueueInvalidateState;
-(void)withinQueueSetDelegate:(id)arg1 ;
-(void)setVenues:(id)arg1 ;
-(id)remoteObjectProtocol;
-(id)endpointName;
-(void)withinQueueReconnectInvalidatedConnectionFailed:(id)arg1 ;
-(id)withinQueuePermanentShutdownReason;
-(char)withinQueueCanReinitializeRemoteState;
-(void)withinQueueReinitializeRemoteState;
-(id)initWithApiKey:(id)arg1 ;
-(id)initWithApiKey:(id)arg1 onServer:(id)arg2 ;
-(id)initWithConnection:(id)arg1 ;
@end

