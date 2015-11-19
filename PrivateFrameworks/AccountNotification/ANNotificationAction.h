/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccountNotification.framework/AccountNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSDictionary;

@interface ANNotificationAction : NSObject <NSSecureCoding> {

	char _isInternalURL;
	NSURL* _url;
	NSDictionary* _options;

}

@property (nonatomic,copy) NSURL * url;                         //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSDictionary * options;              //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) char isInternalURL;                //@synthesize isInternalURL=_isInternalURL - In the implementation block
+(char)supportsSecureCoding;
+(id)actionForLaunchingApp:(id)arg1 withOptions:(id)arg2 ;
+(id)actionForOpeningWebURL:(id)arg1 ;
+(id)actionForLaunchingApp:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(void)perform;
-(id)initWithManagedObject:(id)arg1 ;
-(void)setIsInternalURL:(char)arg1 ;
-(char)isInternalURL;
@end

