/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoardServices/FBSDisplayLayoutElement.h>
#import <libobjc.A.dylib/SBSDisplayLayoutElement.h>

@protocol SBSDisplayLayoutElement <NSObject>
@property (getter=isSpringBoardElement,nonatomic,readonly) char springBoardElement; 
@property (nonatomic,readonly) int layoutRole; 
@required
-(int)layoutRole;
-(char)isSpringBoardElement;

@end


@class NSString;

@interface SBSDisplayLayoutElement : FBSDisplayLayoutElement <SBSDisplayLayoutElement>

@property (assign,nonatomic) int layoutRole; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isSpringBoardElement,nonatomic,readonly) char springBoardElement; 
-(void)setLayoutRole:(int)arg1 ;
-(id)succinctDescriptionBuilder;
-(int)layoutRole;
-(char)isSpringBoardElement;
-(id)initWithIdentifier:(id)arg1 layoutRole:(int)arg2 ;
@end

