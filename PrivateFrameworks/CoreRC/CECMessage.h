/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreRC/CoreRC-Structs.h>
@interface CECMessage : NSObject {

	CECFrame _frame;

}

@property (nonatomic,readonly) unsigned char initiator; 
@property (nonatomic,readonly) unsigned char destination; 
@property (nonatomic,readonly) int messageType; 
@property (nonatomic,readonly) unsigned char length; 
@property (nonatomic,readonly) CECFrame frame; 
@property (nonatomic,readonly) char shouldBeIgnored; 
@property (nonatomic,readonly) char isBroadcast; 
@property (nonatomic,readonly) double nominalLatency; 
+(id)userControlPressed:(CECUserControl)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3 ;
+(id)activeSourceFrom:(unsigned char)arg1 physicalAddress:(unsigned short)arg2 ;
+(id)imageViewOnFrom:(unsigned char)arg1 to:(unsigned char)arg2 ;
+(id)textViewOnFrom:(unsigned char)arg1 to:(unsigned char)arg2 ;
+(id)inactiveSourceFrom:(unsigned char)arg1 to:(unsigned char)arg2 physicalAddress:(unsigned short)arg3 ;
+(id)requestActiveSourceFrom:(unsigned char)arg1 ;
+(id)routingChangeFrom:(unsigned char)arg1 originalAddress:(unsigned short)arg2 newAddress:(unsigned short)arg3 ;
+(id)routingInformationFrom:(unsigned char)arg1 physicalAddress:(unsigned short)arg2 ;
+(id)setStreamPathFrom:(unsigned char)arg1 physicalAddress:(unsigned short)arg2 ;
+(id)standbyFrom:(unsigned char)arg1 to:(unsigned char)arg2 ;
+(id)cecVersion:(unsigned char)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3 ;
+(id)getCECVersionFrom:(unsigned char)arg1 to:(unsigned char)arg2 ;
+(id)givePhysicalAddressFrom:(unsigned char)arg1 to:(unsigned char)arg2 ;
+(id)getMenuLanguageFrom:(unsigned char)arg1 to:(unsigned char)arg2 ;
+(id)pollFrom:(unsigned char)arg1 to:(unsigned char)arg2 ;
+(id)reportPhysicalAddress:(unsigned short)arg1 deviceType:(unsigned char)arg2 from:(unsigned char)arg3 ;
+(id)setMenuLanguage:(CECLanguage)arg1 from:(unsigned char)arg2 ;
+(id)deckControlWithMode:(unsigned char)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3 ;
+(id)deckStatusWithInfo:(unsigned char)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3 ;
+(id)giveDeckStatusWithRequest:(unsigned char)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3 ;
+(id)playWithMode:(unsigned char)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3 ;
+(id)deviceVendorID:(unsigned)arg1 from:(unsigned char)arg2 ;
+(id)giveDeviceVendorIDFrom:(unsigned char)arg1 to:(unsigned char)arg2 ;
+(id)giveOSDNameFrom:(unsigned char)arg1 to:(unsigned char)arg2 ;
+(id)setOSDName:(CECOSDName)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3 ;
+(id)menuStatus:(unsigned char)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3 ;
+(id)userControlReleasedFrom:(unsigned char)arg1 to:(unsigned char)arg2 ;
+(id)giveDevicePowerStatusFrom:(unsigned char)arg1 to:(unsigned char)arg2 ;
+(id)reportPowerStatus:(unsigned char)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3 ;
+(id)featureAbort:(unsigned char)arg1 reason:(unsigned char)arg2 from:(unsigned char)arg3 to:(unsigned char)arg4 ;
+(id)abortFrom:(unsigned char)arg1 to:(unsigned char)arg2 ;
+(id)giveSystemAudioModeStatusFrom:(unsigned char)arg1 to:(unsigned char)arg2 ;
+(id)systemAudioModeRequestWithPhysicalAddress:(unsigned short)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3 ;
+(id)messageWithFrame:(CECFrame)arg1 ;
-(id)initWithFrame:(CECFrame)arg1 ;
-(CECFrame)frame;
-(id)description;
-(id)debugDescription;
-(unsigned char)length;
-(unsigned char)destination;
-(char)parseReportPhysicalAddress:(unsigned*)arg1 deviceType:(unsigned*)arg2 ;
-(char)isBroadcast;
-(double)nominalLatency;
-(char)shouldBeIgnored;
-(char)parseFeatureAbortOpcode:(char*)arg1 reason:(unsigned char*)arg2 ;
-(char)parseActiveSourcePhysicalAddress:(unsigned*)arg1 ;
-(char)parseInactiveSourcePhysicalAddress:(unsigned*)arg1 ;
-(char)parseSetStreamPathPhysicalAddress:(unsigned*)arg1 ;
-(char)parseRoutingChangeOriginalAddress:(unsigned*)arg1 newAddress:(unsigned*)arg2 ;
-(char)parseRoutingInformationPhysicalAddress:(unsigned*)arg1 ;
-(char)parseSetOSDName:(id*)arg1 ;
-(char)parseDeviceVendorID:(unsigned*)arg1 ;
-(char)parseCECVersion:(unsigned char*)arg1 ;
-(char)parseSetMenuLanguage:(CECLanguage*)arg1 ;
-(char)parseReportPowerStatus:(unsigned*)arg1 ;
-(char)parsePlayMode:(unsigned*)arg1 ;
-(char)parseDeckControlMode:(unsigned*)arg1 ;
-(char)parseDeckStatusInfo:(unsigned*)arg1 ;
-(char)parseGiveDeckStatusRequest:(unsigned char*)arg1 ;
-(char)parseMenuRequest:(unsigned char*)arg1 ;
-(char)parseUserControlPressed:(CECUserControl*)arg1 ;
-(char)parseSystemAudioModeStatus:(unsigned*)arg1 ;
-(const char*)_operandsWithLength:(unsigned char)arg1 ;
-(unsigned char)_operandsLength;
-(unsigned char)initiator;
-(int)messageType;
@end

