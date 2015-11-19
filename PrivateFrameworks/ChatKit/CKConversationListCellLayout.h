/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:25 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ChatKit/ChatKit-Structs.h>
@interface CKConversationListCellLayout : NSObject {

	char _invalid;
	char _shouldShowChevron;
	float _summaryLabelCapFrameYOrigin;
	CGRect _tableBounds;
	CGRect _summaryFrame;
	CGRect _summaryFrameWhenSummarizingAttachment;
	CGRect _dateFrame;
	CGRect _senderFrame;
	CGRect _senderFrameWhenUnread;
	CGRect _groupViewFrame;
	CGRect _attachmentIconFrame;
	CGRect _chevronFrame;
	CGRect _unreadFrame;

}

@property (assign,nonatomic) char invalid;                                              //@synthesize invalid=_invalid - In the implementation block
@property (assign,nonatomic) char shouldShowChevron;                                    //@synthesize shouldShowChevron=_shouldShowChevron - In the implementation block
@property (assign,nonatomic) CGRect tableBounds;                                        //@synthesize tableBounds=_tableBounds - In the implementation block
@property (assign,nonatomic) CGRect summaryFrame;                                       //@synthesize summaryFrame=_summaryFrame - In the implementation block
@property (assign,nonatomic) CGRect summaryFrameWhenSummarizingAttachment;              //@synthesize summaryFrameWhenSummarizingAttachment=_summaryFrameWhenSummarizingAttachment - In the implementation block
@property (assign,nonatomic) CGRect dateFrame;                                          //@synthesize dateFrame=_dateFrame - In the implementation block
@property (assign,nonatomic) CGRect senderFrame;                                        //@synthesize senderFrame=_senderFrame - In the implementation block
@property (assign,nonatomic) CGRect senderFrameWhenUnread;                              //@synthesize senderFrameWhenUnread=_senderFrameWhenUnread - In the implementation block
@property (assign,nonatomic) CGRect groupViewFrame;                                     //@synthesize groupViewFrame=_groupViewFrame - In the implementation block
@property (assign,nonatomic) CGRect attachmentIconFrame;                                //@synthesize attachmentIconFrame=_attachmentIconFrame - In the implementation block
@property (assign,nonatomic) CGRect chevronFrame;                                       //@synthesize chevronFrame=_chevronFrame - In the implementation block
@property (assign,nonatomic) CGRect unreadFrame;                                        //@synthesize unreadFrame=_unreadFrame - In the implementation block
@property (assign,nonatomic) float summaryLabelCapFrameYOrigin;                         //@synthesize summaryLabelCapFrameYOrigin=_summaryLabelCapFrameYOrigin - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)invalidate;
-(CGRect)chevronFrame;
-(void)setChevronFrame:(CGRect)arg1 ;
-(char)shouldShowChevron;
-(void)setSummaryLabelCapFrameYOrigin:(float)arg1 ;
-(void)setSummaryFrame:(CGRect)arg1 ;
-(void)setSenderFrame:(CGRect)arg1 ;
-(void)setDateFrame:(CGRect)arg1 ;
-(void)setUnreadFrame:(CGRect)arg1 ;
-(void)setInvalid:(char)arg1 ;
-(char)invalid;
-(CGRect)senderFrame;
-(CGRect)dateFrame;
-(CGRect)summaryFrame;
-(float)summaryLabelCapFrameYOrigin;
-(CGRect)unreadFrame;
-(void)setShouldShowChevron:(char)arg1 ;
-(CGRect)tableBounds;
-(void)setTableBounds:(CGRect)arg1 ;
-(CGRect)summaryFrameWhenSummarizingAttachment;
-(void)setSummaryFrameWhenSummarizingAttachment:(CGRect)arg1 ;
-(CGRect)senderFrameWhenUnread;
-(void)setSenderFrameWhenUnread:(CGRect)arg1 ;
-(CGRect)groupViewFrame;
-(void)setGroupViewFrame:(CGRect)arg1 ;
-(CGRect)attachmentIconFrame;
-(void)setAttachmentIconFrame:(CGRect)arg1 ;
@end

