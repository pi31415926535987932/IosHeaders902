/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:14 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicEntityHorizontalLockupView.h>

@class UIButton, UIImageView, MusicContextualActionsHeaderBlendingHighlightView;

@interface MusicContextualActionsHeaderLockupView : MusicEntityHorizontalLockupView {

	UIButton* _addToLibraryButton;
	char _highlighted;
	UIImageView* _disclosureImageView;
	MusicContextualActionsHeaderBlendingHighlightView* _highlightView;
	UIButton* _likeButton;
	UIButton* _radioButton;
	UIButton* _shareButton;
	char _supportsRadio;
	char _supportsSharing;
	char _supportsSelection;
	unsigned _addToLibraryState;
	unsigned _likeState;

}

@property (assign,nonatomic,__weak) id<MusicContextualActionsHeaderLockupViewDelegate> delegate; 
@property (assign,nonatomic) unsigned addToLibraryState;                                                      //@synthesize addToLibraryState=_addToLibraryState - In the implementation block
@property (assign,nonatomic) unsigned likeState;                                                              //@synthesize likeState=_likeState - In the implementation block
@property (assign,nonatomic) char supportsRadio;                                                              //@synthesize supportsRadio=_supportsRadio - In the implementation block
@property (assign,nonatomic) char supportsSharing;                                                            //@synthesize supportsSharing=_supportsSharing - In the implementation block
@property (assign,nonatomic) char supportsSelection;                                                          //@synthesize supportsSelection=_supportsSelection - In the implementation block
+(float)defaultTextDescriptorHeightAdditionsForContentDescriptor:(id)arg1 width:(float)arg2 traitCollection:(id)arg3 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(UIEdgeInsets)layoutMargins;
-(id)_touchForEvent:(id)arg1 ;
-(void)_configureArtworkCatalog:(id)arg1 ;
-(void)setAddToLibraryState:(unsigned)arg1 ;
-(void)setSupportsRadio:(char)arg1 ;
-(void)setSupportsSelection:(char)arg1 ;
-(void)setSupportsSharing:(char)arg1 ;
-(void)setLikeState:(unsigned)arg1 ;
-(unsigned)likeState;
-(void)_addToLibraryButtonAction:(id)arg1 ;
-(void)_likeButtonAction:(id)arg1 ;
-(void)_radioButtonAction:(id)arg1 ;
-(void)_setHighlighted:(char)arg1 ;
-(unsigned)addToLibraryState;
-(char)supportsRadio;
-(char)supportsSharing;
-(char)supportsSelection;
-(void)_shareButtonAction:(id)arg1 ;
@end

