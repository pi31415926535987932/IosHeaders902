/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iapd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface IAPDataLogger : NSObject
+(void)PowerlogEASession:(id)arg1 forAccessory:(id)arg2 forProtocolID:(unsigned char)arg3 forPortType:(unsigned char)arg4 isSessionOpen:(char)arg5 ;
+(void)PowerlogAccAttach:(id)arg1 ;
+(void)AggAccAttach:(id)arg1 WithManufacturer:(id)arg2 ;
+(void)PowerlogAccDetach:(id)arg1 AndConnectionTime:(unsigned long)arg2 ;
+(void)AggAccDetach:(id)arg1 WithManufacturer:(id)arg2 AndConnectionTime:(unsigned long)arg3 ;
+(id)sanitizeString:(id)arg1 ;
+(unsigned long)sanitizeData:(unsigned long)arg1 ;
@end

