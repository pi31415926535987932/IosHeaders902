/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:19:34 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/ABSimpleTextInputViewControllerDelegate.h>

@class NSString, NSIndexPath, UITableView, NSMutableArray, ABPropertyGroup, ABStyleProvider;

@interface ABItemLabelPicker : UIView <UITableViewDataSource, UITableViewDelegate, ABSimpleTextInputViewControllerDelegate> {

	id _delegate;
	id _editedItem;
	NSString* _savedLabel;
	NSString* _selectedLabel;
	NSIndexPath* _selectedPath;
	UITableView* _tableView;
	NSMutableArray* _additionalLabels;
	CFArrayRef _sortedCustomItemLabelInfos;
	CFArrayRef _sortedDefaultItemLabelInfos;
	void* _sortedCustomItemLabelInfosMemory;
	void* _sortedDefaultItemLabelInfosMemory;
	ABPropertyGroup* _propertyGroup;
	int _property;
	int _itemIndex;
	void* _addressBook;
	char _addLabelDisabled;
	char _didCreateNewLabel;
	ABStyleProvider* _styleProvider;

}

@property (nonatomic,readonly) UITableView * tableView;                                    //@synthesize tableView=_tableView - In the implementation block
@property (assign,getter=isAddLabelDisabled,nonatomic) char addLabelDisabled;              //@synthesize addLabelDisabled=_addLabelDisabled - In the implementation block
@property (nonatomic,retain) ABStyleProvider * styleProvider;                              //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic) void* addressBook;                                            //@synthesize addressBook=_addressBook - In the implementation block
@property (assign,nonatomic) char didCreateNewLabel;                                       //@synthesize didCreateNewLabel=_didCreateNewLabel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)builtInLabelsForProperty:(int)arg1 ;
+(CFDictionaryRef)copyLabelUsageForPropertyGroup:(id)arg1 person:(id)arg2 ;
+(CFDictionaryRef)copyLabelUsageForProperty:(int)arg1 person:(id)arg2 ;
+(id)defaultLabelsForProperty:(int)arg1 policy:(void*)arg2 ;
+(id)_defaultLabelsForProperty:(int)arg1 person:(id)arg2 propertyGroup:(id)arg3 index:(int)arg4 addressBook:(void*)arg5 outBestLabelIndex:(int*)arg6 forceIncludeLabels:(id)arg7 ;
+(id)defaultLabelsForProperty:(int)arg1 person:(id)arg2 addressBook:(void*)arg3 outBestLabelIndex:(int*)arg4 forceIncludeLabels:(id)arg5 ;
+(id)defaultLabelsForPropertyGroup:(id)arg1 index:(int)arg2 addressBook:(void*)arg3 outBestLabelIndex:(int*)arg4 forceIncludeLabels:(id)arg5 ;
+(id)defaultLabelForProperty:(int)arg1 person:(id)arg2 addressBook:(void*)arg3 ;
-(void)buildUI;
-(void)resetLabelCaches;
-(void)_setSelectedLabel:(id)arg1 ;
-(void)_setSelectedPath:(id)arg1 ;
-(void)_matchSelectedPathWithSelectedLabel;
-(char)allowsCustomLabels;
-(id)selectedLabel;
-(void)setSelectedLabel:(id)arg1 ;
-(void)reloadItemLabels;
-(void)setIsEditing:(char)arg1 animate:(char)arg2 ;
-(void)setDidCreateNewLabel:(char)arg1 ;
-(void)_didEndPickingAndConfirmed:(char)arg1 animate:(char)arg2 ;
-(void)createNewCustomLabel;
-(void)_setSelectedLabel:(id)arg1 atPath:(id)arg2 ;
-(void)simpleTextInputViewController:(id)arg1 didCompleteWithValue:(id)arg2 ;
-(char)simpleTextInputViewControllerShouldDismissKeyboard:(id)arg1 ;
-(void)setPropertyGroup:(id)arg1 itemIndex:(int)arg2 ;
-(void)setAdditionalLabels:(id)arg1 ;
-(void)setSavedLabel:(id)arg1 ;
-(id)savedLabel;
-(void)toggleEditing;
-(char)shouldPopItem;
-(char)isAddLabelDisabled;
-(void)setAddLabelDisabled:(char)arg1 ;
-(char)didCreateNewLabel;
-(ABStyleProvider *)styleProvider;
-(void)setStyleProvider:(ABStyleProvider *)arg1 ;
-(void)setAddressBook:(void*)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(UITableView *)tableView;
-(char)isEditing;
-(void)displayScrollerIndicators;
-(char)canEdit;
-(void*)addressBook;
@end

