/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CDSession, CDDevice, NSMutableDictionary, NSDictionary, NSMutableArray;

@interface _CDComplications : NSObject {

	NSObject*<OS_dispatch_queue> complicationQueue;
	char _admissionReady;
	CDSession* session;
	CDDevice* remoteDevice;
	int deviceChangeToken;
	int dataChangeToken;
	NSMutableDictionary* meterTokens;
	NSDictionary* _activeComplications;
	NSMutableArray* localAttributes;
	NSMutableArray* remoteAttributes;

}

@property (nonatomic,copy,readonly) NSDictionary * activeComplications;              //@synthesize activeComplications=_activeComplications - In the implementation block
@property (assign) char admissionReady;                                              //@synthesize admissionReady=_admissionReady - In the implementation block
+(id)initializeForAdmissionChecking:(char)arg1 ;
-(id)initForAdmission:(char)arg1 ;
-(char)admissionReady;
-(void)setupForAdmissions;
-(void)readOutActiveComplications;
-(NSDictionary *)activeComplications;
-(void)updateRemoteDevice;
-(char)admissionCheckOnComplication:(id)arg1 forRemote:(char)arg2 error:(id*)arg3 ;
-(char)isBundleActiveComplication:(id)arg1 ;
-(void)meteringStartedOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 ;
-(void)meteringUpdateOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 ;
-(void)meteringStoppedOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 ;
-(id)CDAttributeForComplication:(id)arg1 error:(id*)arg2 ;
-(void)setAdmissionReady:(char)arg1 ;
@end

