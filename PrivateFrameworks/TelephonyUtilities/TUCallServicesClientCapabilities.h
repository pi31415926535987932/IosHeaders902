/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:10 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TUCallServicesClientCapabilities : NSObject <NSSecureCoding> {

	char _wantsFrequencyChangeNotifications;

}

@property (assign,nonatomic) char wantsFrequencyChangeNotifications;              //@synthesize wantsFrequencyChangeNotifications=_wantsFrequencyChangeNotifications - In the implementation block
+(id)sharedInstance;
+(char)supportsSecureCoding;
-(void)save;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)wantsFrequencyChangeNotifications;
-(void)setWantsFrequencyChangeNotifications:(char)arg1 ;
@end
