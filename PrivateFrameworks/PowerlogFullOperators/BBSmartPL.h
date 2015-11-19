/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:04 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PLSmartPLService, PLEntryNotificationOperatorComposition, NSDate, PLTelephonyConnection;

@interface BBSmartPL : NSObject {

	PLSmartPLService* _operator;
	PLEntryNotificationOperatorComposition* _bbHwOtherCallback;
	NSDate* _lastLogDate;
	PLTelephonyConnection* _connection;
	double _logDuration;
	double _cxoDuration;

}

@property (__weak) PLSmartPLService * operator;                                             //@synthesize operator=_operator - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * bbHwOtherCallback;              //@synthesize bbHwOtherCallback=_bbHwOtherCallback - In the implementation block
@property (retain) NSDate * lastLogDate;                                                    //@synthesize lastLogDate=_lastLogDate - In the implementation block
@property (assign) double logDuration;                                                      //@synthesize logDuration=_logDuration - In the implementation block
@property (assign) double cxoDuration;                                                      //@synthesize cxoDuration=_cxoDuration - In the implementation block
@property (__weak) PLTelephonyConnection * connection;                                      //@synthesize connection=_connection - In the implementation block
-(PLTelephonyConnection *)connection;
-(void)setConnection:(PLTelephonyConnection *)arg1 ;
-(void)startWithOperator:(id)arg1 ;
-(void)setLastLogDate:(NSDate *)arg1 ;
-(void)setCxoDuration:(double)arg1 ;
-(void)handleMavBBHwOtherCallback:(id)arg1 ;
-(void)setBbHwOtherCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(double)cxoDuration;
-(NSDate *)lastLogDate;
-(void)triggerBBCoreDump;
-(PLEntryNotificationOperatorComposition *)bbHwOtherCallback;
-(void)setLogDuration:(double)arg1 ;
-(double)logDuration;
-(PLSmartPLService *)operator;
-(void)setOperator:(PLSmartPLService *)arg1 ;
@end
