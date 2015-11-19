/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:26 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKMessageEntryTextView.h>
#import <libobjc.A.dylib/NSTextStorageDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSMutableDictionary, CKComposition, UITapGestureRecognizer, NSString;

@interface CKMessageEntryRichTextView : CKMessageEntryTextView <NSTextStorageDelegate, UIGestureRecognizerDelegate> {

	char _balloonColor;
	NSMutableDictionary* _mediaObjects;
	NSMutableDictionary* _composeImages;
	CKComposition* _pasteboardComposition;
	int _pasteboardChangeCount;
	UITapGestureRecognizer* _tapGestureRecognizer;

}

@property (assign,nonatomic) id<CKMessageEntryRichTextViewDelegate> delegate; 
@property (assign,nonatomic) char balloonColor;                                            //@synthesize balloonColor=_balloonColor - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mediaObjects;                           //@synthesize mediaObjects=_mediaObjects - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * composeImages;                          //@synthesize composeImages=_composeImages - In the implementation block
@property (nonatomic,retain) CKComposition * pasteboardComposition;                        //@synthesize pasteboardComposition=_pasteboardComposition - In the implementation block
@property (assign,nonatomic) int pasteboardChangeCount;                                    //@synthesize pasteboardChangeCount=_pasteboardChangeCount - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)dealloc;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(NSMutableDictionary *)mediaObjects;
-(void)setMediaObjects:(NSMutableDictionary *)arg1 ;
-(void)setBalloonColor:(char)arg1 ;
-(id)compositionText;
-(void)tapGestureRecognized:(id)arg1 ;
-(CKComposition *)pasteboardComposition;
-(int)pasteboardChangeCount;
-(void)setPasteboardComposition:(CKComposition *)arg1 ;
-(void)setPasteboardChangeCount:(int)arg1 ;
-(id)attributedTextForCompositionText:(id)arg1 ;
-(void)previewDidChange:(id)arg1 ;
-(void)setComposeImages:(NSMutableDictionary *)arg1 ;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(NSMutableDictionary *)composeImages;
-(void)updateComposeImages;
-(id)composeImageForTransferGUID:(id)arg1 ;
-(char)balloonColor;
-(void)textStorage:(id)arg1 willProcessEditing:(unsigned)arg2 range:(NSRange)arg3 changeInLength:(int)arg4 ;
-(void)setCompositionText:(id)arg1 ;
@end

