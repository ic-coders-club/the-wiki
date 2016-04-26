Double_t measure(TGraph *gr, TGraph *sc, Double_t scale)
{
  // Measure a path length specified by the points of a TGraph, gr.
  // The scale distance is specified by the 2 point TGraph sc.
  // scale is a distance in some units, equal to the length of sc.
  //
  Int_t N = gr->GetN();  // number of points in gr.

  // Calculate the scaling factor for the path length.
  //
  Double_t *xsc = sc->GetX();
  Double_t *ysc = sc->GetY();
  Double_t dx = xsc[1] - xsc[0];
  Double_t dy = ysc[1] - ysc[0];
  Double_t dfact = scale/sqrt(dx*dx + dy*dy);
  
  // Add up the path length around gr.
  //
  Double_t dsum = 0.0;
  Double_t *xgr = gr->GetX();
  Double_t *ygr = gr->GetY();
  for (int i=0; i<N-1; i++)
  {
    dx = xgr[i+1] - xgr[i];
    dy = ygr[i+1] - ygr[i];
    dsum += sqrt(dx*dx + dy*dy);
  }

  return dfact*dsum;
}
