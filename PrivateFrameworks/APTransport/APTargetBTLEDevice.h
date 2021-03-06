/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/APTransport.framework/APTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <APTransport/APTransport-Structs.h>
@class NSUUID;

@interface APTargetBTLEDevice : NSObject {

	char _isSoloCapable;
	char _supportsMediaControlPort;
	NSUUID* _deviceID;
	int _lastRSSI;
	SCD_Struct_AP0 _lastData;
	unsigned long long _lastBeaconTicks;

}

@property (nonatomic,retain) NSUUID * deviceID;                               //@synthesize deviceID=_deviceID - In the implementation block
@property (assign,nonatomic) char isSoloCapable;                              //@synthesize isSoloCapable=_isSoloCapable - In the implementation block
@property (assign,nonatomic) char supportsMediaControlPort;                   //@synthesize supportsMediaControlPort=_supportsMediaControlPort - In the implementation block
@property (assign,nonatomic) SCD_Struct_AP0 lastData;                         //@synthesize lastData=_lastData - In the implementation block
@property (assign,nonatomic) unsigned long long lastBeaconTicks;              //@synthesize lastBeaconTicks=_lastBeaconTicks - In the implementation block
@property (assign,nonatomic) int lastRSSI;                                    //@synthesize lastRSSI=_lastRSSI - In the implementation block
-(void)dealloc;
-(char)isSoloCapable;
-(void)setIsSoloCapable:(char)arg1 ;
-(char)supportsMediaControlPort;
-(void)setSupportsMediaControlPort:(char)arg1 ;
-(SCD_Struct_AP0)lastData;
-(void)setLastData:(SCD_Struct_AP0)arg1 ;
-(unsigned long long)lastBeaconTicks;
-(void)setLastBeaconTicks:(unsigned long long)arg1 ;
-(int)lastRSSI;
-(void)setLastRSSI:(int)arg1 ;
-(void)setDeviceID:(NSUUID *)arg1 ;
-(NSUUID *)deviceID;
@end

