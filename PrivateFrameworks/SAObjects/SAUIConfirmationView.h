/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:23 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class NSArray, NSString;

@interface SAUIConfirmationView : SAAceView

@property (nonatomic,copy) NSArray * allConfirmationOptions; 
@property (nonatomic,copy) NSString * cancelTrigger; 
@property (nonatomic,copy) NSArray * confirmCommands; 
@property (nonatomic,copy) NSString * confirmText; 
@property (nonatomic,copy) NSArray * denyCommands; 
@property (nonatomic,copy) NSString * denyText; 
+(id)confirmationView;
+(id)confirmationViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)allConfirmationOptions;
-(void)setAllConfirmationOptions:(NSArray *)arg1 ;
-(NSString *)cancelTrigger;
-(void)setCancelTrigger:(NSString *)arg1 ;
-(NSArray *)confirmCommands;
-(void)setConfirmCommands:(NSArray *)arg1 ;
-(NSString *)confirmText;
-(void)setConfirmText:(NSString *)arg1 ;
-(NSArray *)denyCommands;
-(void)setDenyCommands:(NSArray *)arg1 ;
-(NSString *)denyText;
-(void)setDenyText:(NSString *)arg1 ;
@end
