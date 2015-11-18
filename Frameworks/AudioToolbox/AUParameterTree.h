/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:20:35 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AudioToolbox/AudioToolbox-Structs.h>
#import <AudioToolbox/AUParameterGroup.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, AUAudioUnit_XH;

@interface AUParameterTree : AUParameterGroup <NSSecureCoding> {

	char __autoCreatedForV2AU;
	char __suppressObserverCallbacks;
	NSObject*<OS_dispatch_queue> _observationQueue;
	AUObserverController* _observerController;
	NSObject*<OS_dispatch_queue> _valueAccessQueue;
	AUAudioUnit_XH* __auXH;
	int _numObservers;
	int _numRecorders;
	AURemoteParameterObserverRef _remoteObserverToken;
	AURemoteParameterObserverRef _remoteRecorderToken;
	vector<AddressToParameter, std::__1::allocator<AddressToParameter> >* _addrToParamIndex;

}

@property (assign,nonatomic) vector<AddressToParameter addrToParamIndex;                    //@synthesize addrToParamIndex=_addrToParamIndex - In the implementation block
@property (assign,nonatomic) char _autoCreatedForV2AU;                                      //@synthesize _autoCreatedForV2AU=__autoCreatedForV2AU - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> observationQueue;               //@synthesize observationQueue=_observationQueue - In the implementation block
@property (assign,nonatomic) AUObserverController* observerController;                      //@synthesize observerController=_observerController - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> valueAccessQueue;               //@synthesize valueAccessQueue=_valueAccessQueue - In the implementation block
@property (assign,nonatomic) AUAudioUnit_XH * _auXH;                                        //@synthesize _auXH=__auXH - In the implementation block
@property (assign,nonatomic) int numObservers;                                              //@synthesize numObservers=_numObservers - In the implementation block
@property (assign,nonatomic) int numRecorders;                                              //@synthesize numRecorders=_numRecorders - In the implementation block
@property (assign,nonatomic) AURemoteParameterObserverRef remoteObserverToken;              //@synthesize remoteObserverToken=_remoteObserverToken - In the implementation block
@property (assign,nonatomic) AURemoteParameterObserverRef remoteRecorderToken;              //@synthesize remoteRecorderToken=_remoteRecorderToken - In the implementation block
@property (assign,nonatomic) char _suppressObserverCallbacks;                               //@synthesize _suppressObserverCallbacks=__suppressObserverCallbacks - In the implementation block
+(id)createParameterWithIdentifier:(id)arg1 name:(id)arg2 address:(unsigned long long)arg3 min:(float)arg4 max:(float)arg5 unit:(unsigned long)arg6 unitName:(id)arg7 flags:(unsigned long)arg8 valueStrings:(id)arg9 dependentParameters:(id)arg10 ;
+(id)createGroupWithIdentifier:(id)arg1 name:(id)arg2 children:(id)arg3 ;
+(id)createGroupTemplate:(id)arg1 ;
+(id)createGroupFromTemplate:(id)arg1 identifier:(id)arg2 name:(id)arg3 addressOffset:(unsigned long long)arg4 ;
+(id)createTreeWithChildren:(id)arg1 ;
+(char)supportsSecureCoding;
-(void)set_auXH:(AUAudioUnit_XH *)arg1 ;
-(void)set_suppressObserverCallbacks:(char)arg1 ;
-(id)parameterWithAddress:(unsigned long long)arg1 ;
-(char)_autoCreatedForV2AU;
-(void)parameterChanged:(unsigned long long)arg1 value:(float)arg2 ;
-(void)recordParameterEvents:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)observationQueue;
-(void)_checkInitTreeObservation;
-(AUAudioUnit_XH *)_auXH;
-(int)numObservers;
-(void)setNumObservers:(int)arg1 ;
-(void)setRemoteObserverToken:(AURemoteParameterObserverRef)arg1 ;
-(int)numRecorders;
-(void)setNumRecorders:(int)arg1 ;
-(void)setRemoteRecorderToken:(AURemoteParameterObserverRef)arg1 ;
-(AURemoteParameterObserverRef)remoteRecorderToken;
-(AURemoteParameterObserverRef)remoteObserverToken;
-(void)_init2;
-(void)set_autoCreatedForV2AU:(char)arg1 ;
-(AUObserverController*)observerController;
-(id)parameterWithID:(unsigned long)arg1 scope:(unsigned long)arg2 element:(unsigned long)arg3 ;
-(vector<AddressToParameter)addrToParamIndex;
-(void)setAddrToParamIndex:(vector<AddressToParameter)arg1 ;
-(void)setObserverController:(AUObserverController*)arg1 ;
-(NSObject*<OS_dispatch_queue>)valueAccessQueue;
-(char)_suppressObserverCallbacks;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithChildren:(id)arg1 ;
@end

