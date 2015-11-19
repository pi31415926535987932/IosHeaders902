/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:27 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKChatItem.h>

@interface CKTypingChatItem : CKChatItem

@property (getter=isFromMe,nonatomic,readonly) char fromMe; 
-(UIEdgeInsets)contentInsets;
-(Class)cellClass;
-(char)isFromMe;
-(char)transcriptOrientation;
-(char)displayDuringSend;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(char)wantsDrawerLayout;
@end

