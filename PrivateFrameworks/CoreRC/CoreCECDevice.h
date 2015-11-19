/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRC/CoreRCDevice.h>

@interface CoreCECDevice : CoreRCDevice {

	unsigned char _logicalAddress;
	char _isActiveSource;
	char _systemAudioControlEnabled;
	unsigned _physicalAddress;
	unsigned _deviceType;
	unsigned _cecVersion;
	unsigned _vendorID;
	unsigned _powerStatus;
	unsigned _deckStatus;

}

@property (assign,nonatomic) unsigned char logicalAddress;                  //@synthesize logicalAddress=_logicalAddress - In the implementation block
@property (assign,nonatomic) unsigned physicalAddress;                      //@synthesize physicalAddress=_physicalAddress - In the implementation block
@property (assign,nonatomic) unsigned deviceType;                           //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,nonatomic) unsigned cecVersion;                           //@synthesize cecVersion=_cecVersion - In the implementation block
@property (assign,nonatomic) unsigned vendorID;                             //@synthesize vendorID=_vendorID - In the implementation block
@property (assign,nonatomic) unsigned powerStatus;                          //@synthesize powerStatus=_powerStatus - In the implementation block
@property (assign,nonatomic) char isActiveSource;                           //@synthesize isActiveSource=_isActiveSource - In the implementation block
@property (nonatomic,readonly) char systemAudioControlEnabled;              //@synthesize systemAudioControlEnabled=_systemAudioControlEnabled - In the implementation block
@property (assign,nonatomic) unsigned deckStatus;                           //@synthesize deckStatus=_deckStatus - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)delegate;
-(id)initWithDevice:(id)arg1 ;
-(void)shouldAssertActiveSource;
-(void)setIsActiveSource:(char)arg1 ;
-(void)deckControlPlayHasBeenReceived:(unsigned)arg1 fromDevice:(id)arg2 ;
-(void)deckControlCommandHasBeenReceived:(unsigned)arg1 fromDevice:(id)arg2 ;
-(void)deckControlStatusHasBeenUpdated:(unsigned)arg1 fromDevice:(id)arg2 ;
-(void)featureAbort:(id)arg1 ;
-(void)standbyRequestHasBeenReceived:(id)arg1 ;
-(id)initWithBus:(id)arg1 local:(char)arg2 ;
-(unsigned)physicalAddress;
-(char)isActiveSource;
-(id)initWithBus:(id)arg1 local:(char)arg2 logicalAddress:(unsigned char)arg3 physicalAddress:(unsigned)arg4 deviceType:(unsigned)arg5 ;
-(unsigned char)logicalAddress;
-(void)setPhysicalAddress:(unsigned)arg1 ;
-(void)setLogicalAddress:(unsigned char)arg1 ;
-(unsigned)cecVersion;
-(unsigned)deckStatus;
-(char)systemAudioControlEnabled;
-(void)notifyDelegateActiveSourceStatusHasChanged;
-(char)refreshProperties:(id)arg1 ofDevice:(id)arg2 error:(id*)arg3 ;
-(void)notifyDelegateDeckControlCommandHasBeenReceived:(id)arg1 command:(unsigned)arg2 ;
-(void)notifyDelegateDeckControlPlayHasBeenReceived:(id)arg1 playMode:(unsigned)arg2 ;
-(void)notifyDelegateDeckControlStatusHasBeenUpdated:(id)arg1 deckInfo:(unsigned)arg2 ;
-(void)notifyDelegateFeatureAbort:(id)arg1 ;
-(void)notifyDelegateShouldAssertActiveSource;
-(void)notifyDelegateStandbyRequestHasBeenReceived:(id)arg1 ;
-(id)mergeProperties;
-(void)setDeckStatus:(unsigned)arg1 ;
-(char)deckControlSetDeckStatus:(unsigned)arg1 error:(id*)arg2 ;
-(char)deckControlCommandWithMode:(unsigned)arg1 target:(id)arg2 error:(id*)arg3 ;
-(char)deckControlPlayWithMode:(unsigned)arg1 target:(id)arg2 error:(id*)arg3 ;
-(char)deckControlRefreshStatus:(id)arg1 requestType:(unsigned)arg2 error:(id*)arg3 ;
-(char)makeActiveSourceWithTVMenus:(char)arg1 error:(id*)arg2 ;
-(char)performStandbyWithTargetDevice:(id)arg1 error:(id*)arg2 ;
-(char)refreshDevices:(id*)arg1 ;
-(char)refreshPropertiesOfDevice:(id)arg1 error:(id*)arg2 ;
-(char)requestActiveSource:(id*)arg1 ;
-(char)resignActiveSource:(id*)arg1 ;
-(char)setSystemAudioControlEnabled:(char)arg1 error:(id*)arg2 ;
-(char)systemAudioModeRequest:(unsigned)arg1 error:(id*)arg2 ;
-(char)setPowerStatus:(unsigned)arg1 error:(id*)arg2 ;
-(void)setCecVersion:(unsigned)arg1 ;
-(void)setVendorID:(unsigned)arg1 ;
-(unsigned)vendorID;
-(void)setDeviceType:(unsigned)arg1 ;
-(unsigned)deviceType;
-(unsigned)powerStatus;
-(void)setPowerStatus:(unsigned)arg1 ;
@end

