/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:45 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FLHSA2PasswordResetNotification : NSObject <NSSecureCoding> {

	NSString* _title;
	NSString* _informativeText;
	NSString* _approveButtonTitle;
	NSString* _dismissButtonTitle;
	NSString* _appleID;

}

@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * informativeText;                 //@synthesize informativeText=_informativeText - In the implementation block
@property (nonatomic,copy) NSString * approveButtonTitle;              //@synthesize approveButtonTitle=_approveButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * dismissButtonTitle;              //@synthesize dismissButtonTitle=_dismissButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * appleID;                         //@synthesize appleID=_appleID - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)informativeText;
-(id)initWithFollowUpItemUserInfo:(id)arg1 ;
-(id)followUpItemUserInfo;
-(NSString *)approveButtonTitle;
-(void)setApproveButtonTitle:(NSString *)arg1 ;
-(NSString *)dismissButtonTitle;
-(void)setDismissButtonTitle:(NSString *)arg1 ;
-(void)setInformativeText:(NSString *)arg1 ;
-(void)setAppleID:(NSString *)arg1 ;
-(NSString *)appleID;
@end

