/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class GEOMapItemAttribution, NSArray, NSString;

@interface _MKMapItemAttribution : NSObject {
    GEOMapItemAttribution *_geoAttribution;
}

@property(readonly) NSArray * attributionApps;
@property(readonly) NSArray * attributionURLs;
@property(readonly) NSString * providerName;
@property(readonly) BOOL requiresAttributionInCallout;

- (void).cxx_destruct;
- (id)attributionApps;
- (id)attributionURLs;
- (id)initWithGEOMapItemAttribution:(id)arg1;
- (id)providerLogoImageForScale:(float)arg1;
- (id)providerName;
- (id)providerSnippetLogoImageForScale:(float)arg1;
- (BOOL)requiresAttributionInCallout;

@end