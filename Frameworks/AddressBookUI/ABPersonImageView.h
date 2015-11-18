/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:19:35 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABPasteboardControl.h>

@protocol ABStyleProvider, ABPersonImageDataDelegate;
@class UIImageView, ABClippingImageView, UIImage, ABUIPerson;

@interface ABPersonImageView : ABPasteboardControl {

	UIImageView* _personImageView;
	UIImageView* _editingImageView;
	ABClippingImageView* _emptyImageView;
	ABClippingImageView* _pasteboardMaskImageView;
	UIImage* _personImage;
	char _isEditing;
	char _showLabel;
	char _needsReflow;
	char _needsReload;
	char _allowsEditing;
	char _multiplePhotoBackdropEnabled;
	ABUIPerson* _displayedPerson;
	id<ABStyleProvider> _styleProvider;
	id<ABPersonImageDataDelegate> _imageDataDelegate;

}

@property (nonatomic,retain) ABUIPerson * displayedPerson;                                 //@synthesize displayedPerson=_displayedPerson - In the implementation block
@property (nonatomic,retain) id<ABStyleProvider> styleProvider;                            //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic) char allowsEditing;                                           //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) char multiplePhotoBackdropEnabled;                            //@synthesize multiplePhotoBackdropEnabled=_multiplePhotoBackdropEnabled - In the implementation block
@property (assign,nonatomic) id<ABPersonImageDataDelegate> imageDataDelegate;              //@synthesize imageDataDelegate=_imageDataDelegate - In the implementation block
@property (nonatomic,readonly) UIImage * maskImage; 
@property (nonatomic,readonly) UIImage * backgroundImage; 
@property (nonatomic,readonly) UIImage * overlayImage; 
@property (nonatomic,readonly) UIImage * attributionImage; 
+(id)newImageWithName:(id)arg1 ;
-(id)personImageView;
-(void)setImageDataDelegate:(id<ABPersonImageDataDelegate>)arg1 ;
-(id<ABPersonImageDataDelegate>)imageDataDelegate;
-(void)setIsEditing:(char)arg1 animate:(char)arg2 ;
-(char)abShouldShowMenu;
-(void)abMenuControllerWillShow:(id)arg1 ;
-(void)abMenuControllerWillHide;
-(UIImage *)maskImage;
-(UIImage *)overlayImage;
-(UIImage *)attributionImage;
-(void)_drawEditLabelInFrame:(CGRect)arg1 ;
-(id)editingImageView;
-(id)framedPhoto;
-(id)emptyImageView;
-(void)reflowIfNeeded;
-(id)copyDefaultImageForPerson:(id)arg1 ;
-(void)setNeedsReflow;
-(id)pasteboardMaskImageView;
-(id)_supportedPasteboardImageTypesIncludingCustomTypes:(char)arg1 ;
-(id)_newDictionaryWithImageData;
-(void)setMultiplePhotoBackdropEnabled:(char)arg1 ;
-(char)multiplePhotoBackdropEnabled;
-(id<ABStyleProvider>)styleProvider;
-(id)initWithFrame:(CGRect)arg1 styleProvider:(id)arg2 ;
-(void)setStyleProvider:(id<ABStyleProvider>)arg1 ;
-(void)reflow;
-(void)setDisplayedPerson:(ABUIPerson *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)reload;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(UIImage *)backgroundImage;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(char)allowsEditing;
-(void)setAllowsEditing:(char)arg1 ;
-(void)setNeedsReload;
-(void)reloadIfNeeded;
-(ABUIPerson *)displayedPerson;
@end
