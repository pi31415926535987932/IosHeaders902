/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/AVCRTCPPacket.h>

@class AVCRTCPReceiverReport;

@interface AVCRTCPSenderReport : AVCRTCPPacket {

	unsigned _NTPMostSignificantWord;
	unsigned _NTPLeastSignificantWord;
	unsigned _RTPTimestamp;
	unsigned _packetsSent;
	unsigned _octetsSent;
	AVCRTCPReceiverReport* _receiverReport;

}

@property (assign,nonatomic) unsigned NTPMostSignificantWord;                     //@synthesize NTPMostSignificantWord=_NTPMostSignificantWord - In the implementation block
@property (assign,nonatomic) unsigned NTPLeastSignificantWord;                    //@synthesize NTPLeastSignificantWord=_NTPLeastSignificantWord - In the implementation block
@property (assign,nonatomic) unsigned RTPTimestamp;                               //@synthesize RTPTimestamp=_RTPTimestamp - In the implementation block
@property (assign,nonatomic) unsigned packetsSent;                                //@synthesize packetsSent=_packetsSent - In the implementation block
@property (assign,nonatomic) unsigned octetsSent;                                 //@synthesize octetsSent=_octetsSent - In the implementation block
@property (nonatomic,retain) AVCRTCPReceiverReport * receiverReport;              //@synthesize receiverReport=_receiverReport - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithRTCPPacket:(tagRTCPPACKET*)arg1 ;
-(unsigned)NTPMostSignificantWord;
-(unsigned)NTPLeastSignificantWord;
-(unsigned)RTPTimestamp;
-(unsigned)octetsSent;
-(AVCRTCPReceiverReport *)receiverReport;
-(void)setNTPMostSignificantWord:(unsigned)arg1 ;
-(void)setNTPLeastSignificantWord:(unsigned)arg1 ;
-(void)setRTPTimestamp:(unsigned)arg1 ;
-(void)setOctetsSent:(unsigned)arg1 ;
-(void)setReceiverReport:(AVCRTCPReceiverReport *)arg1 ;
-(void)setPacketsSent:(unsigned)arg1 ;
-(unsigned)packetsSent;
@end

