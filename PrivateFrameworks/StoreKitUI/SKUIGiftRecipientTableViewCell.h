/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <libobjc.A.dylib/ABPeoplePickerNavigationControllerDelegate.h>
#import <libobjc.A.dylib/MFComposeRecipientViewDelegate.h>
#import <libobjc.A.dylib/SKUIGiftContactSearchDelegate.h>

@class ABPeoplePickerNavigationController, UILabel, MFComposeRecipientView, SKUIGiftContactSearchController, UIView, NSAttributedString, NSString, NSArray;

@interface SKUIGiftRecipientTableViewCell : UITableViewCell <ABPeoplePickerNavigationControllerDelegate, MFComposeRecipientViewDelegate, SKUIGiftContactSearchDelegate> {

	void* _addressBook;
	ABPeoplePickerNavigationController* _peoplePickerController;
	UILabel* _placeholderLabel;
	MFComposeRecipientView* _recipientView;
	SKUIGiftContactSearchController* _searchController;
	UIView* _topBorderView;

}

@property (nonatomic,copy) NSAttributedString * attributedPlaceholder; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSArray * recipientAddresses; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2 ;
-(void*)_addressBook;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(char)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(char)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(void)composeRecipientView:(id)arg1 textDidChange:(id)arg2 ;
-(void)recipientViewDidResignFirstResponder:(id)arg1 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg1 ;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)arg1 ;
-(id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 identifier:(int)arg3 ;
-(void)composeRecipientViewDidBecomeFirstResponder:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setAttributedPlaceholder:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedPlaceholder;
-(NSArray *)recipientAddresses;
-(void)setRecipientAddresses:(NSArray *)arg1 ;
-(void)presentSearchResultsPopover:(id)arg1 animated:(char)arg2 ;
-(void)presentPeoplePickerPopover:(id)arg1 animated:(char)arg2 ;
-(void)_sendDismissPeoplePicker;
-(void)_resetSearchController;
-(void)_sendDidChangeRecipients;
-(void)_sendDidUpdateSearchController;
-(void)searchController:(id)arg1 didSelectRecipient:(id)arg2 ;
-(void)searchControllerDidFinishSearch:(id)arg1 ;
@end

