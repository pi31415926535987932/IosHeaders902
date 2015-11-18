/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:30:28 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <AddressBookUI/ABContactViewController.h>
#import <libobjc.A.dylib/ABContactViewControllerDelegate.h>
#import <libobjc.A.dylib/MKStackingViewControllerPreferredSizeUse.h>
#import <libobjc.A.dylib/MKHideableBottomSeparator.h>
#import <libobjc.A.dylib/MKPlaceAttributionCellProvider.h>

@protocol MKPlaceInfoViewControllerDelegate, MKMapItemVendorDeal;
@class ABCardGroup, _MKPlaceViewController, MKMapItem, NSArray, UIImage, _MKPlaceInfoViewControllerRouter, NSMutableDictionary, NSAttributedString, NSString;

@interface MKPlaceInfoViewController : ABContactViewController <ABContactViewControllerDelegate, MKStackingViewControllerPreferredSizeUse, MKHideableBottomSeparator, MKPlaceAttributionCellProvider> {

	ABCardGroup* _directionsGroup;
	ABCardGroup* _dealsGroup;
	ABCardGroup* _businessInfoGroup;
	ABCardGroup* _inlineMapGroup;
	ABCardGroup* _flyoverGroup;
	float _businessInfoSizedForWidth;
	char _showAttribution;
	char _viewShouldHideBottommostSeparator;
	char _shouldHideContactInfo;
	_MKPlaceViewController* _owner;
	id<MKPlaceInfoViewControllerDelegate> _infoDelegate;
	MKMapItem* _mapItem;
	NSArray* _businessInfoOrder;
	UIImage* _inlineMap;
	id<MKMapItemVendorDeal> _deal;
	_MKPlaceInfoViewControllerRouter* _actionsProxy;
	NSMutableDictionary* _removedContactsFields;

}

@property (assign,nonatomic,__weak) id<MKPlaceInfoViewControllerDelegate> infoDelegate;              //@synthesize infoDelegate=_infoDelegate - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                                    //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,retain) id<MKMapItemVendorDeal> deal;                                           //@synthesize deal=_deal - In the implementation block
@property (nonatomic,readonly) NSAttributedString * infoAttributionString; 
@property (assign,nonatomic) char shouldHideContactInfo;                                             //@synthesize shouldHideContactInfo=_shouldHideContactInfo - In the implementation block
@property (assign,nonatomic,__weak) _MKPlaceViewController * owner;                                  //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) NSArray * businessInfoOrder;                                            //@synthesize businessInfoOrder=_businessInfoOrder - In the implementation block
@property (nonatomic,retain) UIImage * inlineMap;                                                    //@synthesize inlineMap=_inlineMap - In the implementation block
@property (nonatomic,retain) _MKPlaceInfoViewControllerRouter * actionsProxy;                        //@synthesize actionsProxy=_actionsProxy - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * removedContactsFields;                            //@synthesize removedContactsFields=_removedContactsFields - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char requiresPreferredContentSizeInStackingView; 
@property (assign,nonatomic) char viewShouldHideBottommostSeparator;                                 //@synthesize viewShouldHideBottommostSeparator=_viewShouldHideBottommostSeparator - In the implementation block
@property (assign,nonatomic) char showAttribution;                                                   //@synthesize showAttribution=_showAttribution - In the implementation block
-(void)setContact:(id)arg1 ;
-(char)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(id)arg4 ;
-(char)requiresPreferredContentSizeInStackingView;
-(void)setViewShouldHideBottommostSeparator:(char)arg1 ;
-(char)viewShouldHideBottommostSeparator;
-(void)setInfoDelegate:(id<MKPlaceInfoViewControllerDelegate>)arg1 ;
-(void)_updateBusinessInfoForWidth:(float)arg1 withTraits:(id)arg2 ;
-(id<MKMapItemVendorDeal>)deal;
-(char)contactHasRemovableInfo:(id)arg1 ;
-(NSArray *)businessInfoOrder;
-(id)contactHeaderView;
-(void)setDeal:(id<MKMapItemVendorDeal>)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(NSMutableDictionary *)removedContactsFields;
-(void)_showDeal;
-(void)setBusinessInfoOrder:(NSArray *)arg1 ;
-(void)_setupActions;
-(NSAttributedString *)infoAttributionString;
-(int)contactView:(id)arg1 numberOfItemsInGroup:(id)arg2 ;
-(void)_flyoverTour:(id)arg1 ;
-(UIImage *)inlineMap;
-(void)_rerouteFromAddress:(id)arg1 ;
-(void)_setupBusinessInfo;
-(char)shouldHideContactInfo;
-(void)moveInfoForContact:(id)arg1 intoInfo:(id)arg2 ;
-(_MKPlaceInfoViewControllerRouter *)actionsProxy;
-(char)willShowBusinessInfo;
-(void)setActionsProxy:(_MKPlaceInfoViewControllerRouter *)arg1 ;
-(id)contactView:(id)arg1 cellForItemAtIndex:(int)arg2 inGroup:(id)arg3 ;
-(void)configureContactForShouldHideAddress:(char)arg1 ;
-(id)configuredContactForContact:(id)arg1 shouldHideAddress:(char)arg2 ;
-(void)_updateBusinessInfoForWidth:(float)arg1 withTraits:(id)arg2 forceReload:(char)arg3 ;
-(id<MKPlaceInfoViewControllerDelegate>)infoDelegate;
-(void)setShowAttribution:(char)arg1 ;
-(void)_handleBusinessAttributionRequest;
-(void)setInlineMap:(UIImage *)arg1 ;
-(id)removedInfoForContact:(id)arg1 ;
-(void)resetContactGroups;
-(char)removedInfoExistsForContact:(id)arg1 ;
-(void)setRemovedInfo:(id)arg1 forContact:(id)arg2 ;
-(void)setShouldHideContactInfo:(char)arg1 ;
-(void)setRemovedContactsFields:(NSMutableDictionary *)arg1 ;
-(void)restoreFieldsForContact:(id)arg1 withInfo:(id)arg2 ;
-(void)_launchMaps;
-(char)showAttribution;
-(void)_launchMapsDirectionsWithSource:(id)arg1 destination:(id)arg2 directionsMode:(id)arg3 ;
-(void)updateInlineMapWithRefinedMapItem:(id)arg1 ;
-(void)_directionsToAddress:(unsigned)arg1 ;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)tableViewDidFinishReload:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)_updatePreferredContentSize;
-(void)setOwner:(_MKPlaceViewController *)arg1 ;
-(_MKPlaceViewController *)owner;
@end
