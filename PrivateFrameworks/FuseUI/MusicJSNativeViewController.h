/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:13 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKJSEventListenerObject.h>
#import <libobjc.A.dylib/IKDOMFeature.h>
#import <libobjc.A.dylib/MusicJSNativeViewController.h>
@class IKJSNavigationDocument;


@protocol MusicJSNativeViewController <JSExport>
@property (nonatomic,readonly) IKJSNavigationDocument * navigationDocument; 
@required
-(IKJSNavigationDocument *)navigationDocument;

@end


@protocol MusicClientContextConsuming;
@class NSString, IKAppContext, IKJSNavigationDocument, IKDOMElement, IKJSObject, UIViewController, SKUIViewElement;

@interface MusicJSNativeViewController : IKJSEventListenerObject <IKDOMFeature, MusicJSNativeViewController> {

	char _configured;
	IKDOMElement* _ownerDOMElement;
	IKJSObject* _ownerForScriptObjectGraph;
	UIViewController*<MusicClientContextConsuming> _ownerViewController;
	SKUIViewElement* _ownerViewElement;
	NSString* _featureName;
	NSString* _nativeViewIdentifier;
	int _presentationSource;

}

@property (nonatomic,readonly) NSString * nativeViewIdentifier;                                                              //@synthesize nativeViewIdentifier=_nativeViewIdentifier - In the implementation block
@property (assign,nonatomic) int presentationSource;                                                                         //@synthesize presentationSource=_presentationSource - In the implementation block
@property (getter=_isConfigured,nonatomic,readonly) char configured; 
@property (getter=_ownerForScriptObjectGraph,nonatomic,__weak,readonly) IKJSObject * ownerForScriptObjectGraph; 
@property (getter=_ownerViewElement,nonatomic,__weak,readonly) SKUIViewElement * ownerViewElement; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * featureName;                                                                  //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext; 
@property (nonatomic,readonly) IKJSNavigationDocument * navigationDocument; 
+(id)makeFeatureJSObjectForFeature:(id)arg1 ;
-(void)setPresentationSource:(int)arg1 ;
-(NSString *)nativeViewIdentifier;
-(void)navigationDocumentDidChange;
-(id)jsNavigationDocumentForJSContext:(id)arg1 ;
-(int)presentationSource;
-(char)_isConfigured;
-(id)_ownerForScriptObjectGraph;
-(id)_ownerViewElement;
-(void)_configureForOwnerViewController:(id)arg1 ownerDOMElement:(id)arg2 ownerForScriptObjectGraph:(id)arg3 ;
-(NSString *)featureName;
-(id)initWithAppContext:(id)arg1 ;
-(id)initWithDOMNode:(id)arg1 featureName:(id)arg2 ;
-(void)migrateToViewElement:(id)arg1 ;
-(IKJSNavigationDocument *)navigationDocument;
@end

