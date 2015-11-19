/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:05 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PowerlogLiteOperators-Structs.h>
#import <PowerlogLiteOperators/PLMav4BasebandHardwareMessage.h>

@interface PLMav5BasebandHardwareMessage : PLMav4BasebandHardwareMessage {

	PLMav5BasebandHWStatsRPM* _mav5_rpm;
	PLMav5BasebandHWStatsAPPSPerf* _mav5_apps;
	PLMav5BasebandHWStatsSleep* _mav5_apps_sleep;
	PLMav5BasebandHWAPPSSleepVeto* _mav5_apps_sleep_veto;
	PLMav4BasebandHWOnOffComponentStats* _mav5_lpass;
	PLMav5BasebandHWStatsMDSP* _mav5_mdsp;
	PLMav5BasebandHWStatsQDSP* _mav5_qdsp;
	PLMav5BasebandHWStatsSleep* _mav5_mpss_sleep;
	PLMav5BasebandHWMPSSSleepVeto* _mav5_mpss_sleep_veto;
	PLMav5BasebandHWStatsUSB* _mav5_usb;
	PLMav4BasebandHWOnOffComponentStats* _mav5_gps_dpo;
	PLMav5BasebandHWStatsRX* _mav5_rx;
	PLMav5BasebandHWStatsTX* _mav5_tx;
	PLMav5BasebandHWStatsRXSQA* _mav5_rx_sqa;
	PLMav5BasebandHWStatsProtocol* _mav5_protocol;
	PLMav5BasebandHWClocksDuration* _mav5_clock;
	PLMav5BasebandHWStatsSleep* _mav4_mpss_sleep;
	PLMav5BasebandHWMPSSSleepVeto* _mav4_mpss_sleep_veto;

}

@property (assign,nonatomic) PLMav5BasebandHWStatsRPM* rpm;                               //@synthesize mav5_rpm=_mav5_rpm - In the implementation block
@property (assign,nonatomic) PLMav5BasebandHWStatsAPPSPerf* apps;                         //@synthesize mav5_apps=_mav5_apps - In the implementation block
@property (assign,nonatomic) PLMav5BasebandHWAPPSSleepVeto* apps_sleep_veto;              //@synthesize mav5_apps_sleep_veto=_mav5_apps_sleep_veto - In the implementation block
@property (assign,nonatomic) PLMav5BasebandHWStatsSleep* apps_sleep;                      //@synthesize mav5_apps_sleep=_mav5_apps_sleep - In the implementation block
@property (assign,nonatomic) PLMav5BasebandHWStatsUSB* usb;                               //@synthesize mav5_usb=_mav5_usb - In the implementation block
@property (assign,nonatomic) PLMav4BasebandHWOnOffComponentStats* lpass;                  //@synthesize mav5_lpass=_mav5_lpass - In the implementation block
@property (assign,nonatomic) PLMav5BasebandHWMPSSSleepVeto* mpss_sleep_veto;              //@synthesize mav4_mpss_sleep_veto=_mav4_mpss_sleep_veto - In the implementation block
@property (assign,nonatomic) PLMav5BasebandHWStatsSleep* mpss_sleep;                      //@synthesize mav4_mpss_sleep=_mav4_mpss_sleep - In the implementation block
@property (assign,nonatomic) PLMav5BasebandHWStatsMDSP* mdsp;                             //@synthesize mav5_mdsp=_mav5_mdsp - In the implementation block
@property (assign,nonatomic) PLMav5BasebandHWStatsQDSP* qdsp;                             //@synthesize mav5_qdsp=_mav5_qdsp - In the implementation block
@property (assign,nonatomic) PLMav4BasebandHWOnOffComponentStats* gps_dpo;                //@synthesize mav5_gps_dpo=_mav5_gps_dpo - In the implementation block
@property (assign,nonatomic) PLMav5BasebandHWStatsRX* rx;                                 //@synthesize mav5_rx=_mav5_rx - In the implementation block
@property (assign,nonatomic) PLMav5BasebandHWStatsTX* tx;                                 //@synthesize mav5_tx=_mav5_tx - In the implementation block
@property (assign,nonatomic) PLMav5BasebandHWStatsRXSQA* rx_sqa;                          //@synthesize mav5_rx_sqa=_mav5_rx_sqa - In the implementation block
@property (assign,nonatomic) PLMav5BasebandHWStatsProtocol* protocol;                     //@synthesize mav5_protocol=_mav5_protocol - In the implementation block
@property (assign,nonatomic) PLMav5BasebandHWClocksDuration* clock;                       //@synthesize mav5_clock=_mav5_clock - In the implementation block
-(PLMav5BasebandHWClocksDuration*)clock;
-(void)setClock:(PLMav5BasebandHWClocksDuration*)arg1 ;
-(void)parseData:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(PLMav5BasebandHWStatsProtocol*)protocol;
-(void)setRx:(PLMav5BasebandHWStatsRX*)arg1 ;
-(void)setTx:(PLMav5BasebandHWStatsTX*)arg1 ;
-(void)logModemAppWithLogger:(id)arg1 ;
-(void)logPeripheralsWithLogger:(id)arg1 ;
-(void)logRFWithLogger2:(id)arg1 ;
-(PLMav5BasebandHWStatsRX*)rx;
-(PLMav5BasebandHWStatsTX*)tx;
-(id)indexToRAT:(unsigned)arg1 ;
-(void)logWithLogger:(id)arg1 ;
-(void)setLpass:(PLMav4BasebandHWOnOffComponentStats*)arg1 ;
-(void)setApps_sleep_veto:(PLMav5BasebandHWAPPSSleepVeto*)arg1 ;
-(void)setMpss_sleep_veto:(PLMav5BasebandHWMPSSSleepVeto*)arg1 ;
-(void)setGps_dpo:(PLMav4BasebandHWOnOffComponentStats*)arg1 ;
-(void)logRPMWithLogger:(id)arg1 ;
-(void)logAPPSWithLogger:(id)arg1 ;
-(void)logLPASSWithLogger:(id)arg1 ;
-(void)logProtocolWithLogger:(id)arg1 withCount:(unsigned)arg2 ;
-(void)logClockWithLogger:(id)arg1 ;
-(PLMav5BasebandHWAPPSSleepVeto*)apps_sleep_veto;
-(PLMav5BasebandHWMPSSSleepVeto*)mpss_sleep_veto;
-(void)setRpm:(PLMav5BasebandHWStatsRPM*)arg1 ;
-(void)setApps:(PLMav5BasebandHWStatsAPPSPerf*)arg1 ;
-(void)setApps_sleep:(PLMav5BasebandHWStatsSleep*)arg1 ;
-(void)setMdsp:(PLMav5BasebandHWStatsMDSP*)arg1 ;
-(void)setQdsp:(PLMav5BasebandHWStatsQDSP*)arg1 ;
-(void)setMpss_sleep:(PLMav5BasebandHWStatsSleep*)arg1 ;
-(void)setRx_sqa:(PLMav5BasebandHWStatsRXSQA*)arg1 ;
-(PLMav5BasebandHWStatsRPM*)rpm;
-(PLMav5BasebandHWStatsAPPSPerf*)apps;
-(PLMav5BasebandHWStatsSleep*)apps_sleep;
-(PLMav4BasebandHWOnOffComponentStats*)lpass;
-(PLMav5BasebandHWStatsSleep*)mpss_sleep;
-(PLMav5BasebandHWStatsMDSP*)mdsp;
-(PLMav5BasebandHWStatsQDSP*)qdsp;
-(PLMav4BasebandHWOnOffComponentStats*)gps_dpo;
-(PLMav5BasebandHWStatsRXSQA*)rx_sqa;
-(void)formatDurationandCount:(unsigned)arg1 withCount:(unsigned)arg2 inString:(id)arg3 ;
-(void)setProtocol:(PLMav5BasebandHWStatsProtocol*)arg1 ;
-(void)setUsb:(PLMav5BasebandHWStatsUSB*)arg1 ;
-(PLMav5BasebandHWStatsUSB*)usb;
@end

