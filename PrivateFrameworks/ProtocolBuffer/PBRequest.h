/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:17 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>

@interface PBRequest : PBCodable
+(unsigned short)_ADPBDeviceRequestType;
+(unsigned short)_ADPBLocationRequestType;
+(unsigned short)_ADPBProxyRequestType;
-(unsigned)requestTypeCode;
-(Class)responseClass;
@end

