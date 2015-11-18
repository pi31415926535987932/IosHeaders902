/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:44:02 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CNContactPhotoViewDelegate.h>

@protocol CNPresenterDelegate, CNContactHeaderViewDelegate;
@class NSDictionary, CNContactPhotoView, NSMutableArray, NSArray, NSString;

@interface CNContactHeaderView : UIView <CNContactPhotoViewDelegate> {

	char _needsReload;
	char _shouldUseExpandedContentStyle;
	char _alwaysShowsMonogram;
	NSDictionary* _nameTextAttributes;
	id<CNPresenterDelegate> _delegate;
	id<CNContactHeaderViewDelegate> _headerDelegate;
	CNContactPhotoView* _photoView;
	NSMutableArray* _headerConstraints;
	NSArray* _contacts;
	UIEdgeInsets _contentMargins;

}

@property (assign,nonatomic) UIEdgeInsets contentMargins;                                        //@synthesize contentMargins=_contentMargins - In the implementation block
@property (nonatomic,copy) NSDictionary * nameTextAttributes;                                    //@synthesize nameTextAttributes=_nameTextAttributes - In the implementation block
@property (assign,nonatomic,__weak) id<CNPresenterDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactHeaderViewDelegate> headerDelegate;              //@synthesize headerDelegate=_headerDelegate - In the implementation block
@property (assign,nonatomic) char shouldUseExpandedContentStyle;                                 //@synthesize shouldUseExpandedContentStyle=_shouldUseExpandedContentStyle - In the implementation block
@property (nonatomic,readonly) CNContactPhotoView * photoView;                                   //@synthesize photoView=_photoView - In the implementation block
@property (assign,nonatomic) char alwaysShowsMonogram;                                           //@synthesize alwaysShowsMonogram=_alwaysShowsMonogram - In the implementation block
@property (nonatomic,retain) NSMutableArray * headerConstraints;                                 //@synthesize headerConstraints=_headerConstraints - In the implementation block
@property (nonatomic,retain) NSArray * contacts;                                                 //@synthesize contacts=_contacts - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
+(char)requiresConstraintBasedLayout;
-(void)updateWithNewContact:(id)arg1 ;
-(NSArray *)contacts;
-(void)reloadDataPreservingChanges:(char)arg1 ;
-(char)shouldUseExpandedContentStyle;
-(void)setShouldUseExpandedContentStyle:(char)arg1 ;
-(void)setNameTextAttributes:(NSDictionary *)arg1 ;
-(void)reloadDataIfNeeded;
-(NSMutableArray *)headerConstraints;
-(void)setHeaderConstraints:(NSMutableArray *)arg1 ;
-(UIEdgeInsets)contentMargins;
-(void)updateWithContacts:(id)arg1 ;
-(NSDictionary *)nameTextAttributes;
-(id<CNContactHeaderViewDelegate>)headerDelegate;
-(void)photoViewDidUpdate:(id)arg1 ;
-(id)viewControllerForPhotoView:(id)arg1 ;
-(id)contactStoreForPhotoView:(id)arg1 ;
-(id)initWithContact:(id)arg1 frame:(CGRect)arg2 monogrammerStyle:(int)arg3 ;
-(void)updateFontSizes;
-(void)setContentMargins:(UIEdgeInsets)arg1 ;
-(void)saveContactPhoto;
-(char)shouldOffsetPhotoView;
-(void)setHeaderDelegate:(id<CNContactHeaderViewDelegate>)arg1 ;
-(char)alwaysShowsMonogram;
-(void)setAlwaysShowsMonogram:(char)arg1 ;
-(CNContactPhotoView *)photoView;
-(void)setDelegate:(id<CNPresenterDelegate>)arg1 ;
-(void)dealloc;
-(id<CNPresenterDelegate>)delegate;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(char)canBecomeFirstResponder;
-(void)updateConstraints;
-(void)setNeedsReload;
-(void)setContacts:(NSArray *)arg1 ;
@end

