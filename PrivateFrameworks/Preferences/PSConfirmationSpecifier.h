/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:07 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSSpecifier.h>

@class NSString;

@interface PSConfirmationSpecifier : PSSpecifier {

	NSString* _title;
	NSString* _prompt;
	NSString* _okButton;
	NSString* _cancelButton;

}

@property (nonatomic,retain) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * prompt;                    //@synthesize prompt=_prompt - In the implementation block
@property (nonatomic,retain) NSString * okButton;                  //@synthesize okButton=_okButton - In the implementation block
@property (nonatomic,retain) NSString * cancelButton;              //@synthesize cancelButton=_cancelButton - In the implementation block
+(id)preferenceSpecifierNamed:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(int)arg6 edit:(Class)arg7 ;
+(id)specifierWithSpecifier:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(NSString *)cancelButton;
-(void)setCancelButton:(NSString *)arg1 ;
-(char)isDestructive;
-(NSString *)okButton;
-(char)isEqualToSpecifier:(id)arg1 ;
-(void)setOkButton:(NSString *)arg1 ;
-(void)setupWithDictionary:(id)arg1 ;
@end

