/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <SafariShared/WBSParsecModel.h>
#import <libobjc.A.dylib/WBSCompletionListItem.h>

@class WBSParsecImageRepresentation, NSURL, NSString, NSArray, WBSParsecActionButton, NSDictionary;

@interface WBSParsecSearchResult : WBSParsecModel <WBSCompletionListItem> {

	WBSParsecImageRepresentation* _icon;
	WBSParsecImageRepresentation* _completionIcon;
	NSURL* _reportProblemURL;
	NSString* _title;
	NSString* _descriptionText;
	NSString* _identifier;
	NSString* _feedbackIdentifier;
	NSString* _urlString;
	NSString* _sectionHeader;
	NSString* _iTunesItemIdentifier;
	NSString* _completion;
	unsigned _type;
	NSString* _typeString;
	unsigned _minimumRankOfTopHitToSuppressResult;
	NSString* _appName;
	NSString* _appBundleIdentifier;
	NSURL* _appInstallURL;
	NSURL* _appPunchoutURL;
	NSString* _mediaKind;
	NSString* _referrerForLoadingResult;
	NSArray* _cardSections;
	WBSParsecActionButton* _actionButton;
	NSURL* _cardURL;
	NSArray* _supportedStyleOverrides;
	NSDictionary* _styleOverrides;

}

@property (nonatomic,readonly) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * descriptionText;                                 //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * feedbackIdentifier;                              //@synthesize feedbackIdentifier=_feedbackIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * urlString;                                       //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,readonly) NSString * sectionHeader;                                   //@synthesize sectionHeader=_sectionHeader - In the implementation block
@property (nonatomic,copy,readonly) NSString * iTunesItemIdentifier;                       //@synthesize iTunesItemIdentifier=_iTunesItemIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * completion;                                      //@synthesize completion=_completion - In the implementation block
@property (nonatomic,readonly) unsigned type;                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * typeString;                                 //@synthesize typeString=_typeString - In the implementation block
@property (nonatomic,readonly) NSURL * reportProblemURL; 
@property (nonatomic,readonly) unsigned minimumRankOfTopHitToSuppressResult;               //@synthesize minimumRankOfTopHitToSuppressResult=_minimumRankOfTopHitToSuppressResult - In the implementation block
@property (nonatomic,readonly) NSString * appName;                                         //@synthesize appName=_appName - In the implementation block
@property (nonatomic,readonly) NSString * appBundleIdentifier;                             //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * appInstallURL;                                      //@synthesize appInstallURL=_appInstallURL - In the implementation block
@property (nonatomic,readonly) NSURL * appPunchoutURL;                                     //@synthesize appPunchoutURL=_appPunchoutURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaKind;                                  //@synthesize mediaKind=_mediaKind - In the implementation block
@property (nonatomic,copy,readonly) NSString * referrerForLoadingResult;                   //@synthesize referrerForLoadingResult=_referrerForLoadingResult - In the implementation block
@property (nonatomic,copy) NSArray * cardSections;                                         //@synthesize cardSections=_cardSections - In the implementation block
@property (nonatomic,readonly) WBSParsecActionButton * actionButton;                       //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,readonly) NSURL * cardURL;                                            //@synthesize cardURL=_cardURL - In the implementation block
@property (nonatomic,readonly) NSArray * supportedStyleOverrides;                          //@synthesize supportedStyleOverrides=_supportedStyleOverrides - In the implementation block
@property (nonatomic,readonly) NSDictionary * styleOverrides;                              //@synthesize styleOverrides=_styleOverrides - In the implementation block
@property (nonatomic,readonly) WBSParsecImageRepresentation * icon;                        //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) WBSParsecImageRepresentation * completionIcon;              //@synthesize completionIcon=_completionIcon - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * parsecDomainIdentifier; 
@property (nonatomic,readonly) NSString * lastSearchQuery; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)searchResultSchemaWithCache:(id)arg1 ;
+(id)resultWithDictionary:(id)arg1 cache:(id)arg2 ;
+(id)_specializedSchema;
+(Class)replacementClass;
+(id)_searchResultSchemaForCachedResult:(char)arg1 ;
+(void)setReplacementClass:(Class)arg1 ;
+(id)searchResultSchemaForCardDetailRequest;
-(NSString *)urlString;
-(WBSParsecActionButton *)actionButton;
-(NSArray *)cardSections;
-(NSURL *)cardURL;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(unsigned)type;
-(NSString *)title;
-(NSString *)completion;
-(WBSParsecImageRepresentation *)icon;
-(NSDictionary *)styleOverrides;
-(NSString *)sectionHeader;
-(NSString *)appBundleIdentifier;
-(NSString *)typeString;
-(NSString *)descriptionText;
-(NSString *)parsecDomainIdentifier;
-(NSString *)feedbackIdentifier;
-(NSArray *)supportedStyleOverrides;
-(id)iconWithSession:(id)arg1 ;
-(unsigned)_constructTypeMaskForTypeString:(id)arg1 ;
-(void)_setStyleOverridesWithDictionary:(id)arg1 ;
-(NSURL *)reportProblemURL;
-(id)completionIconWithSession:(id)arg1 ;
-(id)_glyphRepresentationsFromGlyphDictionaries:(id)arg1 ;
-(id)_glyphsFromGlyphRepresentations:(id)arg1 withSession:(id)arg2 ;
-(NSString *)iTunesItemIdentifier;
-(unsigned)minimumRankOfTopHitToSuppressResult;
-(NSString *)appName;
-(NSURL *)appInstallURL;
-(NSURL *)appPunchoutURL;
-(NSString *)referrerForLoadingResult;
-(void)setCardSections:(NSArray *)arg1 ;
-(WBSParsecImageRepresentation *)completionIcon;
-(NSString *)mediaKind;
@end

