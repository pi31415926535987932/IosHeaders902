/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString;


@protocol PCInterfaceMonitorProtocol <NSObject>
@property (nonatomic,readonly) int interfaceIdentifier; 
@property (nonatomic,readonly) int linkQuality; 
@property (nonatomic,readonly) char isInterfaceUsable; 
@property (nonatomic,readonly) char isInterfaceHistoricallyUsable; 
@property (nonatomic,readonly) char isInternetReachable; 
@property (nonatomic,retain,readonly) NSString * linkQualityString; 
@property (nonatomic,readonly) char isPoorLinkQuality; 
@property (nonatomic,readonly) char isBadLinkQuality; 
@property (nonatomic,readonly) char isRadioHot; 
@property (nonatomic,readonly) CFStringRef currentRAT; 
@property (nonatomic,readonly) char isLTEWithCDRX; 
@property (nonatomic,readonly) CFStringRef wwanInterfaceName; 
@optional
-(CFStringRef)wwanInterfaceName;
-(CFStringRef)currentRAT;
-(char)isLTEWithCDRX;

@required
-(char)isInternetReachable;
-(char)isInterfaceUsable;
-(NSString *)linkQualityString;
-(char)isPoorLinkQuality;
-(char)isInterfaceHistoricallyUsable;
-(char)isBadLinkQuality;
-(char)isRadioHot;
-(int)linkQuality;
-(int)interfaceIdentifier;

@end
